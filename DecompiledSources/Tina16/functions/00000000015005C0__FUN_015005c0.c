/* Ghidra address: 015005c0 */
/* Ghidra symbol: FUN_015005c0 */


undefined8 FUN_015005c0(char param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  
  *PTR_DAT_02003fc8 = 1;
  *param_2 = 0;
  puVar1 = PTR_DAT_02003fc8;
  if ((param_1 == '\0') && (PTR_DAT_020030c0[0x5d] == '\0')) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  *PTR_DAT_02003fc8 = uVar2;
  if (*PTR_DAT_02003fc8 == '\0') {
    uVar3 = FUN_014fd300(CONCAT71((int7)((ulonglong)puVar1 >> 8),1));
  }
  else {
    FUN_01525f60();
    uVar3 = 1;
  }
  return uVar3;
}

