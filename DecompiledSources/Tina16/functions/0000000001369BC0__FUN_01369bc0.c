/* Ghidra address: 01369bc0 */
/* Ghidra symbol: FUN_01369bc0 */


void FUN_01369bc0(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1[2] + 0x27a8);
  if ((char)param_1[5] != '\0') {
    (**(code **)(*param_1 + 0x20))(param_1);
    FUN_01b1cd00(param_1 + 4,(longlong)param_1 + 0x24);
    if (*(int *)((longlong)param_1 + 0x2c) < 0) {
      FUN_01992870(uVar1,(int)param_1[3],*(undefined4 *)((longlong)param_1 + 0x1c),(int)param_1[4],
                   *(undefined4 *)((longlong)param_1 + 0x24),1);
    }
    else {
      FUN_01992a30(uVar1,*(undefined2 *)((longlong)param_1 + 0x2c),(int)param_1[3],
                   *(undefined4 *)((longlong)param_1 + 0x1c),(int)param_1[4],
                   *(undefined4 *)((longlong)param_1 + 0x24),1);
    }
    FUN_0199e310(uVar1,0,1,0);
  }
  FUN_01364ff0(param_1,param_2,param_3);
  return;
}

