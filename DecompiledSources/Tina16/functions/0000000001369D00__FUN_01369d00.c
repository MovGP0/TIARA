/* Ghidra address: 01369d00 */
/* Ghidra symbol: FUN_01369d00 */


undefined8 FUN_01369d00(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 local_30;
  undefined4 local_2c [3];
  
  uVar2 = FUN_0198d430(*(undefined8 *)(param_1[2] + 0x27a8));
  FUN_01a982d0(uVar2,param_2,param_3,local_2c,&local_30);
  if ((char)param_1[5] == '\0') {
    *(undefined1 *)(param_1 + 5) = 1;
    uVar1 = (**(code **)(*param_1 + 0x30))(param_1);
    (**(code **)(*param_1 + 0x38))(param_1,uVar1);
    FUN_01b1cd00(local_2c,&local_30);
    *(undefined4 *)(param_1 + 3) = local_2c[0];
    *(undefined4 *)((longlong)param_1 + 0x1c) = local_30;
    *(undefined4 *)(param_1 + 4) = local_2c[0];
    *(undefined4 *)((longlong)param_1 + 0x24) = local_30;
    (**(code **)(*param_1 + 0x20))(param_1);
  }
  else {
    (**(code **)(*param_1 + 8))(param_1,param_2,param_3);
  }
  return 0;
}

