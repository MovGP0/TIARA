/* Ghidra address: 0185a4d0 */
/* Ghidra symbol: FUN_0185a4d0 */


longlong * FUN_0185a4d0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_78 [40];
  undefined1 *local_50;
  longlong local_48;
  undefined8 local_40;
  undefined8 local_38;
  int local_2c;
  longlong *local_28;
  longlong *local_20;
  
  local_50 = auStack_78;
  local_20 = (longlong *)0x0;
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_01858398);
  if ((cVar1 == '\0') && (cVar1 = FUN_004113d0(param_2,&PTR_FUN_00a2f148), cVar1 == '\0')) {
    return local_20;
  }
  local_28 = (longlong *)FUN_01859130(param_2);
  local_20 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
  FUN_0060bbf0(local_20,3);
  uVar2 = (**(code **)(*local_28 + 0x60))(local_28);
  (**(code **)(*local_20 + 0x88))(local_20,uVar2);
  uVar2 = (**(code **)(*local_28 + 0x48))(local_28);
  (**(code **)(*local_20 + 0x70))(local_20,uVar2);
  iVar3 = (**(code **)(*local_20 + 0x48))();
  local_2c = 0;
  if (-1 < iVar3 + -1) {
    do {
      local_38 = FUN_0060a050(local_20,local_2c);
      local_40 = FUN_00a3c1b0(local_28,local_2c);
      iVar4 = (**(code **)(*local_20 + 0x60))(local_20);
      local_48 = (longlong)iVar4;
      FUN_00409a70(local_40,local_38,local_48);
      local_2c = local_2c + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00410f20(local_28);
  return local_20;
}

