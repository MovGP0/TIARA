/* Ghidra address: 01369df0 */
/* Ghidra symbol: FUN_01369df0 */


undefined8 FUN_01369df0(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined4 local_30;
  undefined4 local_2c [3];
  
  if ((char)param_1[5] != '\0') {
    *(undefined1 *)((longlong)param_1 + 0x29) = 1;
    uVar1 = FUN_0198d430(*(undefined8 *)(param_1[2] + 0x27a8));
    FUN_01a982d0(uVar1,param_3,param_4,local_2c,&local_30);
    FUN_01b1cd00(local_2c,&local_30);
    (**(code **)(*param_1 + 0x20))(param_1);
    *(undefined4 *)(param_1 + 4) = local_2c[0];
    *(undefined4 *)((longlong)param_1 + 0x24) = local_30;
    (**(code **)(*param_1 + 0x20))(param_1);
  }
  return 0;
}

