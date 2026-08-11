/* Ghidra address: 01341480 */
/* Ghidra symbol: FUN_01341480 */


void FUN_01341480(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  ulonglong in_stack_ffffffffffffffe8;
  
  uVar2 = FUN_01cc3a00(&PTR_FUN_01cb5bc0,1,*(undefined8 *)(param_1 + 0xb0));
  *(undefined8 *)PTR_DAT_02005168 = uVar2;
  if (*(char *)(param_1 + 0x884) != '\0') {
    in_stack_ffffffffffffffe8 = *(ulonglong *)(param_1 + 0x390);
    FUN_017d0c90(param_1,*(undefined8 *)PTR_DAT_02005168,0,*(undefined8 *)(param_1 + 0x888),
                 in_stack_ffffffffffffffe8,0);
  }
  cVar1 = FUN_01b07dd0(param_1);
  if (cVar1 == '\0') {
    FUN_013d2f60(*(undefined8 *)PTR_DAT_02005168,1,0);
  }
  else {
    uVar2 = FUN_014cdce0(*(undefined8 *)(param_1 + 0xe8));
    _enable_preview(uVar2,1);
    uVar2 = FUN_014cdce0(*(undefined8 *)(param_1 + 0xe8));
    _set_preview_time(uVar2,*(undefined8 *)(param_1 + 0x390));
    FUN_015f7080(param_1 + 0xc0,param_1 + 200,1,param_1,
                 in_stack_ffffffffffffffe8 & 0xffffffffffffff00);
    uVar2 = FUN_014cdce0(*(undefined8 *)(param_1 + 0xe8));
    _disable_preview(uVar2);
    FUN_013e5a30(*(undefined8 *)PTR_DAT_02005168,*(undefined8 *)(param_1 + 0xc0),1,0);
  }
  return;
}

