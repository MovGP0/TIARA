/* Ghidra address: 00af81b0 */
/* Ghidra symbol: FUN_00af81b0 */


longlong *
FUN_00af81b0(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  int local_40;
  undefined1 *local_30;
  longlong *local_20;
  
  local_30 = auStack_68;
  local_20 = (longlong *)0x0;
  cVar1 = FUN_00af2f30(param_1);
  if ((cVar1 == '\0') && (*(int *)(*(longlong *)(param_1 + 0x8b0) + 0x10) != 0)) {
    if (4000 < param_5) {
      uVar2 = FUN_0044d490(&PTR_FUN_00ae7ee8,1,L"Vertical Height exceeds 4000");
      FUN_004134c0(uVar2);
    }
    local_20 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
    (**(code **)(*local_20 + 0xf8))(local_20,0);
    FUN_0060bbf0(local_20,6);
    (**(code **)(*local_20 + 0x88))(local_20,param_4);
    (**(code **)(*local_20 + 0x70))(local_20,param_5);
    uVar2 = FUN_00609e10(local_20);
    local_40 = param_5;
    local_48 = param_4;
    FUN_00af79f0(param_1,uVar2,param_2,param_3);
  }
  return local_20;
}

