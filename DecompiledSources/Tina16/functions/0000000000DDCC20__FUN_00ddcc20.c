/* Ghidra address: 00ddcc20 */
/* Ghidra symbol: FUN_00ddcc20 */


int FUN_00ddcc20(longlong param_1,longlong param_2)

{
  int *piVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  bool bVar7;
  int local_44;
  longlong local_40;
  undefined1 local_38;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  iVar6 = 1;
  while( true ) {
    iVar3 = 0;
    if (param_2 != 0) {
      iVar3 = *(int *)(param_2 + -4);
    }
    if (iVar3 < iVar6) {
      bVar7 = false;
    }
    else {
      uVar2 = *(ushort *)(param_2 + -2 + (longlong)iVar6 * 2);
      if (uVar2 < 0x100) {
        bVar7 = ((byte)(&DAT_00ddcda8)[(longlong)(ulonglong)uVar2 >> 3] >> ((ulonglong)uVar2 & 7) &
                1) != 0;
      }
      else {
        bVar7 = false;
      }
    }
    if (!bVar7) break;
    iVar6 = iVar6 + 1;
  }
  if (iVar6 < 2) {
    iVar3 = 0;
    iVar6 = *(int *)(param_1 + 0xc);
    if (-1 < iVar6 + -1) {
      do {
        piVar1 = (int *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar3 * 0x10);
        iVar4 = FUN_0043e6d0(param_2,*(undefined8 *)(piVar1 + 2));
        if (iVar4 == 0) {
          local_44 = *piVar1;
          goto LAB_00ddcd78;
        }
        iVar3 = iVar3 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
  }
  else {
    FUN_00416dc0(local_30,param_2,1,iVar6 + -1);
    local_44 = FUN_0043fc00(local_30[0]);
    iVar3 = 0;
    iVar6 = *(int *)(param_1 + 0xc);
    if (-1 < iVar6 + -1) {
      do {
        if (local_44 == *(int *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar3 * 0x10))
        goto LAB_00ddcd78;
        iVar3 = iVar3 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
  }
  local_38 = 0x11;
  local_40 = param_2;
  uVar5 = FUN_0044d8d0(&PTR_FUN_00620870,1,PTR_PTR_02001e10,&local_40,0);
  FUN_004134c0(uVar5);
LAB_00ddcd78:
  FUN_00414480(local_30);
  return local_44;
}

