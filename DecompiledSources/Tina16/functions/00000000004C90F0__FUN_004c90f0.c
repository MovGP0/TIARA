/* Ghidra address: 004c90f0 */
/* Ghidra symbol: FUN_004c90f0 */


void FUN_004c90f0(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong local_20 [2];
  
  local_20[0] = 0;
  FUN_00419260(local_20,&DAT_00406578,1,0x100);
  FUN_004c9810(param_1);
  do {
    if (*(char *)(*(longlong *)(param_1 + 0x18) + *(longlong *)(param_1 + 0x30)) == '}') {
      FUN_004c9210(param_1);
LAB_004c91cb:
      FUN_00419430(local_20,&DAT_00406578);
      return;
    }
    uVar1 = 0;
    if (local_20[0] != 0) {
      uVar1 = (undefined4)*(undefined8 *)(local_20[0] + -8);
    }
    iVar2 = FUN_004c8600(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x30),local_20,0,
                         uVar1);
    if (iVar2 == 0) {
      FUN_004c8dd0(param_1,PTR_PTR_020013d0);
      goto LAB_004c91cb;
    }
    (**(code **)(*param_2 + 0x30))(param_2,local_20[0],0);
    *(longlong *)(param_1 + 0x30) = *(longlong *)(param_1 + 0x30) + (longlong)(iVar2 * 2);
    FUN_004c9810(param_1);
  } while( true );
}

