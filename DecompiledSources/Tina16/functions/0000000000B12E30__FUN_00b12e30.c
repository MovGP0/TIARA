/* Ghidra address: 00b12e30 */
/* Ghidra symbol: FUN_00b12e30 */


void FUN_00b12e30(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 *local_40;
  longlong local_30;
  int local_28;
  int local_24;
  undefined8 local_20;
  
  local_40 = auStack_88;
  local_50 = 0;
  local_48 = 0;
  local_30 = 0;
  local_20 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  uVar1 = (**(code **)(*param_1 + 0x28))(param_1);
  FUN_004aef90(local_20,uVar1);
  iVar2 = (**(code **)(*param_1 + 0x28))(param_1);
  local_68 = (longlong)iVar2;
  FUN_004192d0(&local_30,param_1[0xf],&DAT_00b0f928,0);
  iVar2 = (**(code **)(*param_1 + 0x28))();
  local_24 = 0;
  if (-1 < iVar2 + -1) {
    do {
      (**(code **)(*param_1 + 0x18))(param_1,&local_48,local_24);
      FUN_004aedb0(local_20,local_24,local_48);
      local_24 = local_24 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_004b6880(param_1,param_2);
  iVar2 = (**(code **)(*param_1 + 0x28))();
  local_24 = 0;
  if (-1 < iVar2 + -1) {
    do {
      (**(code **)(*param_1 + 0x18))(param_1,&local_50,local_24);
      local_28 = FUN_004aeba0(local_20,local_50);
      *(undefined8 *)(param_1[0xf] + (longlong)local_24 * 8) =
           *(undefined8 *)(local_30 + (longlong)local_28 * 8);
      local_24 = local_24 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00410f20(local_20);
  FUN_0083f820(param_1[0x10]);
  FUN_00414560(&local_50,2);
  FUN_00419430(&local_30,&DAT_00b0f928);
  return;
}

