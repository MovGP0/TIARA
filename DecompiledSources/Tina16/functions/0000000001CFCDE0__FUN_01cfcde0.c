/* Ghidra address: 01cfcde0 */
/* Ghidra symbol: FUN_01cfcde0 */


undefined4 FUN_01cfcde0(longlong param_1,char param_2,char param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 local_1d;
  undefined4 local_1c;
  
  local_1d = *(undefined1 *)(param_1 + 0xd1);
  if (param_3 != '\0') {
    uVar2 = FUN_01d07330(param_1);
    if ((byte)uVar2 < 0x80) {
      uVar1 = (undefined4)CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
      goto LAB_01cfce13;
    }
  }
  uVar1 = 0;
LAB_01cfce13:
  lVar3 = FUN_01d06f50(param_1,param_2 == '\0',uVar1,&local_1d);
  if (lVar3 == 0) {
    local_1c = CONCAT22(*(undefined2 *)(param_1 + 0xa4),*(undefined2 *)(param_1 + 0xa0));
  }
  else {
    local_1c = *(undefined4 *)(lVar3 + 0x2c);
  }
  return local_1c;
}

