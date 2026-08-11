/* Ghidra address: 014ac4d0 */
/* Ghidra symbol: FUN_014ac4d0 */


void FUN_014ac4d0(longlong *param_1,undefined8 param_2,short param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined8 local_30;
  
  local_30 = 0;
  lVar4 = *(longlong *)(*param_1 + 0x48);
  if (*(longlong *)(*param_1 + 0x48) == 0) {
    lVar4 = DAT_0210eae0;
  }
  FUN_01d32430(*param_1,*(undefined8 *)(lVar4 + 0x448));
  if (param_3 == 0x10) {
    iVar1 = (**(code **)(**(longlong **)(lVar4 + 0x448) + 0x28))();
    iVar5 = 0;
    if (-1 < iVar1 + -1) {
      do {
        (**(code **)(**(longlong **)(lVar4 + 0x448) + 0x18))
                  (*(longlong **)(lVar4 + 0x448),&local_30,iVar5);
        iVar2 = FUN_004413f0(&DAT_014ac624,local_30);
        lVar3 = FUN_00414de0(&local_30);
        *(undefined2 *)(lVar3 + -2 + (longlong)iVar2 * 2) = 0xff;
        iVar2 = FUN_004170c0(&DAT_014ac634,local_30,iVar2);
        lVar3 = FUN_00414de0(&local_30);
        *(undefined2 *)(lVar3 + -2 + (longlong)iVar2 * 2) = 0xff;
        (**(code **)(**(longlong **)(lVar4 + 0x448) + 0x40))
                  (*(longlong **)(lVar4 + 0x448),iVar5,local_30);
        iVar5 = iVar5 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  FUN_00414480(&local_30);
  return;
}

