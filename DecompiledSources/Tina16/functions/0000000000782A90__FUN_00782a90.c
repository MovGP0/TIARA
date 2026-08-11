/* Ghidra address: 00782a90 */
/* Ghidra symbol: FUN_00782a90 */


void FUN_00782a90(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 local_28;
  undefined1 local_20;
  
  cVar2 = FUN_00782d70(param_1,param_2,0);
  if (cVar2 == '\0') {
    local_20 = 0x11;
    local_28 = param_2;
    uVar1 = FUN_0044d8d0(&PTR_FUN_00777750,1,PTR_PTR_02001748,&local_28,0);
    FUN_004134c0(uVar1);
  }
  return;
}

