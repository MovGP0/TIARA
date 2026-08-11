/* Ghidra address: 00440380 */
/* Ghidra symbol: FUN_00440380 */


byte FUN_00440380(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  byte local_59;
  undefined8 local_58;
  undefined8 local_50 [2];
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_2c [4];
  uint local_28;
  undefined1 local_24 [4];
  undefined8 local_20 [2];
  
  local_58 = 0;
  local_50[0] = 0;
  local_20[0] = 0;
  local_38 = 0;
  local_40 = 0;
  FUN_00419260(&local_38,&DAT_00440308,1,0x104);
  FUN_00419260(&local_40,&DAT_00440348,1,0x104);
  local_59 = 0;
  cVar1 = FUN_00440b00(param_1,1);
  if ((cVar1 != '\0') || (cVar1 = FUN_00440a20(param_1,1), cVar1 != '\0')) {
    FUN_00441820(local_50,param_1);
    FUN_0044f850(local_20,local_50[0]);
    uVar3 = FUN_00416740(local_20[0]);
    iVar2 = thunk_FUN_04187f55(uVar3,local_38,0x104,local_24,local_2c,&local_28,local_40,0x104);
    if (iVar2 != 0) {
      local_59 = (local_28 & 1) != 0;
      if ((local_28 & 2) != 0) {
        local_59 = local_59 | 2;
      }
      if ((local_28 & 0x80) != 0) {
        local_59 = local_59 | 0x20;
      }
      iVar2 = thunk_FUN_04157765(uVar3);
      if (iVar2 != 2) {
        if (iVar2 == 3) {
          local_59 = local_59 | 4;
          goto LAB_0044055a;
        }
        if (iVar2 == 4) {
          local_59 = local_59 | 8;
          goto LAB_0044055a;
        }
        if (iVar2 != 5) goto LAB_0044055a;
      }
      local_59 = local_59 | 0x10;
      goto LAB_0044055a;
    }
    FUN_00451a00();
  }
  FUN_0041ddd0(&local_58,PTR_PTR_02005090);
  uVar3 = FUN_0044d490(&PTR_FUN_00434528,1,local_58);
  FUN_004134c0(uVar3);
LAB_0044055a:
  FUN_00414560(&local_58,2);
  FUN_00419430(&local_40,&DAT_00440348);
  FUN_00419430(&local_38,&DAT_00440308);
  FUN_00414480(local_20);
  return local_59;
}

