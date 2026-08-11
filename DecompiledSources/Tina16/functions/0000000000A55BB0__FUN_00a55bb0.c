/* Ghidra address: 00a55bb0 */
/* Ghidra symbol: FUN_00a55bb0 */


undefined1 FUN_00a55bb0(ushort *param_1)

{
  char cVar1;
  undefined1 uVar2;
  bool bVar3;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  ushort *local_20;
  
  local_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  if (*param_1 < 0x20) {
    bVar3 = (1 << ((byte)*param_1 & 0x1f) & 0x1f000cU) != 0;
  }
  else {
    bVar3 = false;
  }
  local_20 = param_1;
  if (bVar3) {
    FUN_00468530(&local_40,0xff439eb2,0xfffffffffffffffc);
    cVar1 = FUN_0046f320(param_1,&local_40);
    if (cVar1 != '\0') {
      uVar2 = 1;
      goto LAB_00a55c2c;
    }
  }
  uVar2 = 0;
LAB_00a55c2c:
  FUN_00460ba0(&local_40);
  return uVar2;
}

