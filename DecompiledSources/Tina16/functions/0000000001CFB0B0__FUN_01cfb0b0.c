/* Ghidra address: 01cfb0b0 */
/* Ghidra symbol: FUN_01cfb0b0 */


void FUN_01cfb0b0(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  if ((char)param_1[0xac] != '\0') {
    if (*(char *)((longlong)param_1 + 9) == '\0') {
      FUN_01a9a440(param_2,0x12);
    }
    else {
      FUN_01a9a440(param_2,0);
    }
    uVar1 = FUN_01a99b80(param_2);
    (**(code **)(*param_2 + 0xe8))(param_2,2);
    (**(code **)(*param_1 + 0x50))(param_1,param_2,&local_38);
    (**(code **)(*param_2 + 0x40))(param_2,local_38,local_34);
    (**(code **)(*param_2 + 0x48))(param_2,local_30,local_2c);
    (**(code **)(*param_2 + 0x40))(param_2,local_30,local_34);
    (**(code **)(*param_2 + 0x48))(param_2,local_38,local_2c);
    (**(code **)(*param_2 + 0xe8))(param_2,uVar1);
  }
  return;
}

