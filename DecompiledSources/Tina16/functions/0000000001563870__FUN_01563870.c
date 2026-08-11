/* Ghidra address: 01563870 */
/* Ghidra symbol: FUN_01563870 */


undefined4 FUN_01563870(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 local_38 [12];
  undefined1 local_2c [4];
  
  uVar2 = 0;
  if (*(longlong *)(param_1 + 0x9c8) != 0) {
    cVar1 = FUN_00e14e00(*(longlong *)(param_1 + 0x9c8),param_3);
    if (cVar1 != '\0') {
      uVar2 = FUN_00e14cc0(*(undefined8 *)(param_1 + 0x9c8),param_3,3,local_38,local_2c,param_2);
    }
  }
  return uVar2;
}

