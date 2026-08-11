/* Ghidra address: 0043dc80 */
/* Ghidra symbol: RPCRT4.DLL::UuidCreate */


RPC_STATUS __stdcall UuidCreate(UUID *Uuid)

{
  RPC_STATUS RVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0043dc80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  RVar1 = UuidCreate(Uuid);
  return RVar1;
}

