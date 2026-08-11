/* Ghidra address: 017a48e0 */
/* Ghidra symbol: FUN_017a48e0 */


void FUN_017a48e0(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 *local_40;
  undefined8 local_38;
  longlong local_30;
  longlong *local_20;
  
  local_40 = auStack_78;
  local_58 = 0;
  local_48 = 0;
  local_50 = 0;
  local_30 = *(longlong *)(param_1 + 8);
  FUN_00724420(*(undefined8 *)(local_30 + 0xc40),*(undefined8 *)(local_30 + 0xd38));
  cVar1 = (**(code **)(**(longlong **)(local_30 + 0xc40) + 0xa8))(*(longlong **)(local_30 + 0xc40));
  if (cVar1 != '\0') {
    FUN_00724270(*(undefined8 *)(local_30 + 0xc40),&local_50);
    FUN_00441640(&local_48,local_50);
    FUN_00414ad0(local_30 + 0xd38,local_48);
    local_38 = *(undefined8 *)(param_1 + 0x6f0);
    local_20 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
    FUN_00724270(*(undefined8 *)(local_30 + 0xc40),&local_58);
    (**(code **)(*local_20 + 0xa8))(local_20,local_58);
    cVar1 = FUN_00609f90(local_20);
    if (cVar1 != '\x06') {
      uVar3 = FUN_0044d710(&PTR_FUN_005f2298,1,PTR_PTR_02002740);
      FUN_004134c0(uVar3);
    }
    if (*(char *)(param_1 + 0x7b0) != '\0') {
      uVar2 = (**(code **)(*local_20 + 0x60))(local_20);
      FUN_007d55b0(*(undefined8 *)(param_1 + 0x780),uVar2);
      uVar2 = (**(code **)(*local_20 + 0x48))(local_20);
      FUN_007d5610(*(undefined8 *)(param_1 + 0x780),uVar2);
      plVar4 = (longlong *)FUN_00609e10(local_20);
      uVar2 = (**(code **)(*plVar4 + 0x30))(plVar4,0,0);
      *(undefined4 *)(param_1 + 0x7b4) = uVar2;
      *(undefined1 *)(param_1 + 0x7b0) = 0;
    }
    uVar3 = FUN_006e2530(local_38);
    FUN_017a64f0(param_1,local_20,uVar3);
    FUN_00410f20(local_20);
  }
  FUN_00414560(&local_58,2);
  FUN_00414480(&local_48);
  return;
}

