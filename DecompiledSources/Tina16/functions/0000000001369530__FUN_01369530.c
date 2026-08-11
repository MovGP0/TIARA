/* Ghidra address: 01369530 */
/* Ghidra symbol: FUN_01369530 */


undefined4 FUN_01369530(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 unaff_R13D;
  undefined4 local_30;
  undefined4 local_2c;
  
  if (*(char *)((longlong)param_1 + 0x19) == '\0') {
    if ((char)param_1[3] == '\0') {
      *(undefined2 *)((longlong)param_1 + 0x1e) = 6;
    }
    else {
      *(undefined1 *)((longlong)param_1 + 0x1a) = 1;
      uVar2 = FUN_0198d430(*(undefined8 *)(param_1[2] + 0x27a8));
      FUN_01a982d0(uVar2,param_3,param_4,&local_2c,&local_30);
      FUN_01b1cd00(&local_2c,&local_30);
      FUN_01369450(param_1);
      (**(code **)(*param_1 + 0x20))(param_1);
      if (*(char *)((longlong)param_1 + 0x3e) == '\0') {
        FUN_01367ef0(param_1,local_2c,local_30);
      }
      else {
        FUN_01368470(param_1,local_2c,local_30);
      }
      (**(code **)(*param_1 + 0x20))(param_1);
      FUN_013694a0(param_1,local_2c,local_30);
    }
    unaff_R13D = 0;
    uVar1 = (**(code **)(*param_1 + 0x30))(param_1);
    (**(code **)(*param_1 + 0x38))(param_1,uVar1);
  }
  return unaff_R13D;
}

