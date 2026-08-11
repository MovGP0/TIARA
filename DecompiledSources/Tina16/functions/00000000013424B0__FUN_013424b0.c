/* Ghidra address: 013424b0 */
/* Ghidra symbol: FUN_013424b0 */


void FUN_013424b0(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  cVar1 = FUN_01b07dd0(param_1);
  if ((((cVar1 != '\0') && (*PTR_DAT_02002b78 != '\0')) && (*PTR_DAT_020030c0 != '\0')) &&
     ((*(uint *)PTR_DAT_02003570 & 3) != 0)) {
    (**(code **)(**(longlong **)PTR_DAT_02004c68 + 0x328))(*(longlong **)PTR_DAT_02004c68);
    uVar3 = FUN_014cdce0(*(undefined8 *)(param_1 + 0xe8));
    uVar2 = _get_mcu_code(uVar3);
    cVar1 = FUN_0160ead0(uVar2);
    if (cVar1 == '\0') {
      uVar3 = FUN_014cdce0(*(undefined8 *)(param_1 + 0xe8));
      cVar1 = _IsPCChanged(uVar3);
      if (cVar1 != '\0') {
        cVar1 = (**(code **)(**(longlong **)PTR_DAT_02004c68 + 0x330))
                          (*(longlong **)PTR_DAT_02004c68);
        if (cVar1 == '\0') {
          (**(code **)(**(longlong **)PTR_DAT_02004c68 + 0x340))
                    (*(longlong **)PTR_DAT_02004c68,1,
                     *(undefined1 *)(*(longlong *)PTR_DAT_02004c68 + 0x6c4));
        }
        uVar3 = FUN_014cdce0(*(undefined8 *)(param_1 + 0xe8));
        _SetPCChanged(uVar3,0);
        (**(code **)(**(longlong **)PTR_DAT_02004c68 + 0x350))(*(longlong **)PTR_DAT_02004c68);
        if (*(longlong *)PTR_DAT_02004c68 != 0) {
          cVar1 = (**(code **)(**(longlong **)PTR_DAT_02004c68 + 0x358))
                            (*(longlong **)PTR_DAT_02004c68);
          if (cVar1 != '\0') {
            (**(code **)(**(longlong **)PTR_DAT_02004c68 + 0x360))(*(longlong **)PTR_DAT_02004c68);
          }
        }
      }
    }
    else {
      uVar3 = FUN_014cdce0(*(undefined8 *)(param_1 + 0xe8));
      cVar1 = _IsTimeChanged(uVar3);
      if (cVar1 != '\0') {
        cVar1 = (**(code **)(**(longlong **)PTR_DAT_02004c68 + 0x330))
                          (*(longlong **)PTR_DAT_02004c68);
        if (cVar1 == '\0') {
          (**(code **)(**(longlong **)PTR_DAT_02004c68 + 0x340))(*(longlong **)PTR_DAT_02004c68,1,0)
          ;
        }
        uVar3 = FUN_014cdce0(*(undefined8 *)(param_1 + 0xe8));
        _SetTimeChanged(uVar3,0);
        (**(code **)(**(longlong **)PTR_DAT_02004c68 + 0x350))(*(longlong **)PTR_DAT_02004c68);
        if (*(longlong *)PTR_DAT_02004c68 != 0) {
          cVar1 = (**(code **)(**(longlong **)PTR_DAT_02004c68 + 0x358))
                            (*(longlong **)PTR_DAT_02004c68);
          if (cVar1 != '\0') {
            (**(code **)(**(longlong **)PTR_DAT_02004c68 + 0x360))(*(longlong **)PTR_DAT_02004c68);
            FUN_015fa560();
          }
        }
      }
    }
  }
  return;
}

