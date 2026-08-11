/* Ghidra address: 00b00ef0 */
/* Ghidra symbol: FUN_00b00ef0 */


void FUN_00b00ef0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_68 [40];
  undefined8 local_40 [2];
  longlong local_30;
  
  local_40[0] = 0;
  local_30 = 0;
  iVar2 = FUN_00808000(*(undefined8 *)PTR_DAT_02005950);
  FUN_0064cbf0(param_1,(longlong)iVar2 / 2 & 0xffffffff);
  iVar2 = FUN_00807fe0(*(undefined8 *)PTR_DAT_02005950);
  FUN_0064cc50(param_1,(longlong)(iVar2 * 2) / 3 & 0xffffffff);
  FUN_00806af0(param_1,0x32);
  FUN_00806b40(param_1,0x32);
  if (*(char *)(*(longlong *)(param_1 + 0x730) + 0x10) != '\0') {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x700) + 0x4a0);
    (**(code **)(*plVar1 + 0x90))(plVar1);
    iVar2 = *(int *)(*(longlong *)(param_1 + 0x730) + 0x44);
    iVar5 = 0;
    if (-1 < iVar2 + -1) {
      do {
        uVar3 = FUN_009e3510();
        FUN_009e2e70(uVar3,local_40,
                     *(undefined8 *)
                      (*(longlong *)(*(longlong *)(param_1 + 0x730) + 0x48) + (longlong)iVar5 * 0x10
                      ));
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x700) + 0x4a0);
        (**(code **)(*plVar1 + 0x78))(plVar1,local_40[0]);
        iVar5 = iVar5 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  if (*(char *)(*(longlong *)(param_1 + 0x730) + 0x11) != '\0') {
    FUN_006ded30(*(undefined8 *)(*(longlong *)(param_1 + 0x708) + 0x550));
    FUN_004194b0(&local_30,*(undefined8 *)(*(longlong *)(param_1 + 0x730) + 0x50),&DAT_00b01c88);
    uVar3 = 0;
    iVar2 = 0;
    if (local_30 != 0) {
      iVar2 = (int)*(undefined8 *)(local_30 + -8);
    }
    iVar5 = 0;
    if (-1 < iVar2 + -1) {
      do {
        lVar6 = (longlong)iVar5;
        uVar3 = FUN_006def00(*(undefined8 *)(*(longlong *)(param_1 + 0x708) + 0x550),uVar3,
                             **(undefined8 **)(local_30 + lVar6 * 8));
        FUN_006dc990(uVar3,*(undefined8 *)(local_30 + lVar6 * 8));
        lVar6 = *(longlong *)(*(longlong *)(local_30 + lVar6 * 8) + 0x10);
        lVar4 = 0;
        if (lVar6 != 0) {
          lVar4 = *(longlong *)(lVar6 + -8);
        }
        if (0 < lVar4) {
          FUN_00b00de0(auStack_68,
                       *(undefined8 *)(*(longlong *)(local_30 + (longlong)iVar5 * 8) + 0x10),uVar3);
        }
        FUN_006dd070(uVar3,1);
        iVar5 = iVar5 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  FUN_00b018f0(param_1,*(undefined8 *)(param_1 + 0x6e0));
  FUN_00414480(local_40);
  FUN_00419430(&local_30,&DAT_00b01c88);
  return;
}

