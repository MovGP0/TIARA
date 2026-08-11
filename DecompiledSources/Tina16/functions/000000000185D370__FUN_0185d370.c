/* Ghidra address: 0185d370 */
/* Ghidra symbol: FUN_0185d370 */


void FUN_0185d370(longlong param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined1 local_3b;
  undefined1 local_3a;
  undefined1 local_39 [9];
  
  *param_3 = 0xffffffff;
  if (0 < param_2) {
    piVar3 = (int *)FUN_004095c0(0x404);
    if (piVar3 == (int *)0x0) {
      FUN_0044d470();
    }
    uVar1 = FUN_004ae7e0(*(undefined8 *)(param_1 + 0x38),piVar3);
    *param_3 = uVar1;
    *piVar3 = param_2;
    iVar2 = 0;
    if (-1 < param_2 + -1) {
      do {
        (**(code **)(**(longlong **)(param_1 + 8) + 0x18))(*(longlong **)(param_1 + 8),local_39,1);
        (**(code **)(**(longlong **)(param_1 + 8) + 0x18))(*(longlong **)(param_1 + 8),&local_3a,1);
        (**(code **)(**(longlong **)(param_1 + 8) + 0x18))(*(longlong **)(param_1 + 8),&local_3b,1);
        piVar3[(longlong)iVar2 + 1] = (uint)CONCAT12(local_3b,CONCAT11(local_3a,local_39[0]));
        iVar2 = iVar2 + 1;
        param_2 = param_2 + -1;
      } while (param_2 != 0);
    }
    while (*(int *)(*(longlong *)(param_1 + 0x40) + 0x10) <
           *(int *)(*(longlong *)(param_1 + 0x38) + 0x10)) {
      FUN_004ae7e0(*(longlong *)(param_1 + 0x40),0);
    }
    FUN_004aedb0(*(undefined8 *)(param_1 + 0x40),*param_3,0);
  }
  return;
}

