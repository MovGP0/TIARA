/* Ghidra address: 01531c00 */
/* Ghidra symbol: FUN_01531c00 */


void FUN_01531c00(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_38 = 0;
  if (*(char *)(param_1 + 0x1c48) != '\0') {
    if ((*(longlong *)PTR_DAT_02004e40 != 0) &&
       (*(longlong *)(*(longlong *)PTR_DAT_02004e40 + 0x2788) != 0)) {
      lVar2 = FUN_01c8a3c0(*(undefined8 *)PTR_DAT_02004e40,
                           *(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x2788));
      cVar1 = FUN_01d0fb00(lVar2 + 0x40,PTR_DAT_02004010);
      if (cVar1 == '\0') {
        FUN_0199e310(*(undefined8 *)(lVar2 + 0x10),0,1,1);
      }
      FUN_00417c40(lVar2 + 0x40,PTR_DAT_02004010,&DAT_01d0d0b8);
    }
    FUN_00417c40(param_1 + 0x988,PTR_DAT_02004010,&DAT_01d0d0b8);
    FUN_00417c40(PTR_DAT_02004010,param_1 + 0x12c0,&DAT_01d0d0b8);
    *(undefined1 *)(param_1 + 0x1c48) = 0;
  }
  FUN_00441920(&local_38,*(undefined8 *)(param_1 + 0x968));
  local_30 = local_38;
  local_28 = 0x11;
  FUN_00442f70(local_20,*(undefined8 *)(param_1 + 0x970),&local_30,0);
  FUN_0064de00(param_1,local_20[0]);
  FUN_00414480(&local_38);
  FUN_00414480(local_20);
  return;
}

