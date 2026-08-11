/* Ghidra address: 0044e870 */
/* Ghidra symbol: FUN_0044e870 */


undefined8 * FUN_0044e870(undefined4 *param_1)

{
  char cVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined8 *local_38;
  undefined4 local_30 [2];
  undefined1 local_28;
  undefined8 local_20;
  
  local_20 = 0;
  uVar2 = FUN_0044e4d0(param_1);
  uVar2 = uVar2 & 0xff;
  if (7 < uVar2 - 3) {
    if (uVar2 == 0xb) {
      puVar3 = (undefined8 *)FUN_0044e5d0(auStack_68);
      goto LAB_0044e934;
    }
    if (9 < uVar2 - 0xc) {
      FUN_0041ddd0(&local_20,PTR_PTR_020014a0);
      local_30[0] = *param_1;
      local_28 = 0;
      local_48 = 0;
      puVar3 = (undefined8 *)FUN_0044d530(&PTR_FUN_00435238,1,local_20,local_30);
      goto LAB_0044e934;
    }
  }
  puVar3 = (undefined8 *)
           FUN_0044d490(*(undefined8 *)
                         (PTR_PTR_02002300 +
                         (ulonglong)(byte)PTR_DAT_02005028[(longlong)(int)uVar2 * 0x10 + -0x30] * 8)
                        ,1,*(undefined8 *)(PTR_DAT_02005028 + (longlong)(int)uVar2 * 0x10 + -0x28));
LAB_0044e934:
  cVar1 = FUN_004113d0(puVar3,&PTR_FUN_004350e0);
  if (cVar1 != '\0') {
    puVar3[6] = param_1;
  }
  (**(code **)*puVar3)(puVar3,param_1);
  local_38 = puVar3;
  FUN_00414480(&local_20);
  return local_38;
}

