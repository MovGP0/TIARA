/* Ghidra address: 00a08820 */
/* Ghidra symbol: FUN_00a08820 */


void FUN_00a08820(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 local_38 [16];
  
  if ((*(char *)((longlong)param_1 + 0x99) != '\0') && (0 < (int)param_1[0x12])) {
    *(undefined8 *)((longlong)param_1 + 0x9c) = *param_3;
    *(undefined8 *)((longlong)param_1 + 0xa4) = param_3[1];
    FUN_00a08e00(param_1[0x17],*(undefined4 *)((longlong)param_1 + 0x8c));
    iVar1 = (**(code **)(*param_1 + 0x60))(param_1);
    iVar1 = (*(int *)((longlong)param_1 + 0x8c) + -1) * iVar1;
    iVar2 = (**(code **)(*param_1 + 0x60))(param_1);
    uVar3 = (**(code **)(*param_1 + 0x48))(param_1);
    FUN_00498350(local_38,iVar1,0,iVar1 + iVar2,uVar3);
    *(undefined4 *)(param_2 + 0x90) = 0xcc0020;
    uVar4 = FUN_005ffa40(param_2);
    thunk_FUN_041e8c78(uVar4,3);
    FUN_009ece40(param_1[0x16],param_2,(longlong)param_1 + 0x9c,local_38);
  }
  return;
}

