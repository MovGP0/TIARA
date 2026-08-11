/* Ghidra address: 008e59a0 */
/* Ghidra symbol: FUN_008e59a0 */


char FUN_008e59a0(ushort param_1,ushort *param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  char local_39;
  undefined8 local_38;
  uint local_30 [2];
  undefined1 local_28;
  undefined8 local_20;
  undefined1 local_18;
  undefined8 local_10;
  
  local_38 = 0;
  local_10 = 0;
  if (param_1 == 0xffff) {
    FUN_0041ddd0(&local_10,PTR_PTR_02003cd8);
    local_30[0] = 0xffff;
    local_28 = 0;
    local_18 = 0x11;
    local_20 = param_3;
    uVar2 = FUN_0044d530(&PTR_FUN_00436080,1,local_10,local_30,1);
    FUN_004134c0(uVar2);
  }
  cVar1 = '\0';
  do {
    if (*param_2 == param_1) goto LAB_008e5a9c;
    param_2 = param_2 + 1;
    cVar1 = cVar1 + '\x01';
  } while (cVar1 != '\0');
  FUN_0041ddd0(&local_38,PTR_PTR_02003cd8);
  local_30[0] = (uint)param_1;
  local_28 = 0;
  local_18 = 0x11;
  local_20 = param_3;
  uVar2 = FUN_0044d530(&PTR_FUN_00436080,1,local_38,local_30,1);
  FUN_004134c0(uVar2);
  cVar1 = local_39;
LAB_008e5a9c:
  local_39 = cVar1;
  FUN_00414480(&local_38);
  FUN_00414480(&local_10);
  return local_39;
}

