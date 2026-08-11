/* Ghidra address: 00699300 */
/* Ghidra symbol: FUN_00699300 */


void FUN_00699300(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 local_48 [16];
  undefined1 local_38 [24];
  
  FUN_0064d000(param_1[2],local_38);
  cVar1 = *(char *)(param_1[2] + 0xa9);
  FUN_00786040(param_1,0);
  FUN_00785c20(param_1,param_2);
  FUN_00786040(param_1,1);
  *(undefined1 *)(param_1 + 8) = 0;
  (**(code **)(*param_1 + 0x58))(param_1);
  FUN_0064d000(param_1[2],local_48);
  cVar2 = FUN_00423130(local_38,local_48);
  if (((cVar2 != '\0') || (cVar1 != *(char *)(param_1[2] + 0xa9))) &&
     (*(longlong *)(param_1[2] + 0x78) != 0)) {
    uVar3 = FUN_0065b870(*(undefined8 *)(param_1[2] + 0x78));
    thunk_FUN_03a2fc9d(uVar3,local_38,0xffffffff);
  }
  *(undefined1 *)(param_1 + 4) = 1;
  return;
}

