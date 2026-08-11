/* Ghidra address: 013c13c0 */
/* Ghidra symbol: FUN_013c13c0 */


void FUN_013c13c0(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 in_RAX;
  undefined7 uVar2;
  
  cVar1 = *(char *)(param_1 + 0x2b);
  uVar2 = (undefined7)((ulonglong)in_RAX >> 8);
  if (cVar1 == '\0') {
    FUN_01cc6f70(&PTR_FUN_01cb8940,CONCAT71(uVar2,1) & 0xffffffff,param_2);
  }
  else if (cVar1 == '\x01') {
    cVar1 = *(char *)(*(longlong *)(param_2 + 8) + 0x434);
    if (cVar1 == '\x01') {
      FUN_01cc6f70(&PTR_FUN_01cba328,1,param_2);
    }
    else if (cVar1 == '\a') {
      FUN_013c4260(param_2);
    }
    else {
      FUN_01cc6f70(&PTR_FUN_01cb9c30,1,param_2);
    }
  }
  else if (cVar1 == '\x02') {
    FUN_01cc9f30(&PTR_FUN_01cbae98,CONCAT71(uVar2,1) & 0xffffffff,param_2);
  }
  return;
}

