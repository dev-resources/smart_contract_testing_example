#if LOCAL

#ifndef BIRTHCERTUSA_MOCK_SUITE
#define BIRTHCERTUSA_MOCK_SUITE

#include "birthcertusa.hpp"

class [[eosio::contract("birthcertusa")]] mock_suite : public birthcertusa
{
  public:
    mock_suite(eosio::name receiver, eosio::name code, eosio::datastream< const char * > ds) : birthcertusa(receiver, code, ds) {}
    [[eosio::action("mockcert")]] void mock_certificate_table(uint64_t const certificate_id, eosio::name const & account, std::string const & full_name, eosio::time_point const & date_of_birth);
    [[eosio::action("mockretire")]] void mock_retirement_table(eosio::name const & account);
};

#endif

#endif
