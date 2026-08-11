/* Ghidra address: 01ae1660 */
/* Ghidra symbol: FUN_01ae1660 */


void FUN_01ae1660(longlong param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  int local_30;
  int local_2c;
  
  bVar1 = false;
  iVar3 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x28))(*(longlong **)(param_1 + 0xd8));
  local_30 = 1;
  bVar2 = false;
  if (0 < iVar3) {
    do {
      bVar1 = bVar2;
      lVar5 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x30))
                        (*(longlong **)(param_1 + 0xd8),local_30 + -1);
      local_2c = 0;
      while ((iVar4 = (**(code **)(**(longlong **)(lVar5 + 0x78) + 0x28))
                                (*(longlong **)(lVar5 + 0x78)), local_2c < iVar4 &&
             (iVar4 = (**(code **)(**(longlong **)(lVar5 + 0x78) + 0x28))
                                (*(longlong **)(lVar5 + 0x78)), 1 < iVar4))) {
        lVar6 = (**(code **)(**(longlong **)(lVar5 + 0x78) + 0x30))
                          (*(longlong **)(lVar5 + 0x78),local_2c);
        if (*(int *)(*(longlong *)(lVar6 + 0xf8) + 0x10) == 0) {
          bVar1 = true;
          iVar4 = (**(code **)(**(longlong **)(lVar5 + 0x88) + 0xc0))
                            (*(longlong **)(lVar5 + 0x88),*(undefined8 *)(lVar6 + 0x100));
          if (-1 < iVar4) {
            uVar7 = (**(code **)(**(longlong **)(lVar5 + 0x88) + 0x30))
                              (*(longlong **)(lVar5 + 0x88),iVar4);
            FUN_00410f20(uVar7);
            (**(code **)(**(longlong **)(lVar5 + 0x88) + 0x98))(*(longlong **)(lVar5 + 0x88),iVar4);
          }
          (**(code **)(**(longlong **)(lVar5 + 0x78) + 0x98))(*(longlong **)(lVar5 + 0x78),local_2c)
          ;
          FUN_00410f20(lVar6);
        }
        else {
          local_2c = local_2c + 1;
        }
      }
      *(undefined4 *)(lVar5 + 0x94) = 0;
      FUN_01ce34b0(lVar5);
      local_30 = local_30 + 1;
      iVar3 = iVar3 + -1;
      bVar2 = bVar1;
    } while (iVar3 != 0);
  }
  if (bVar1) {
    FUN_01acfa60(param_1);
    FUN_01aceb90(param_1,1);
  }
  return;
}

