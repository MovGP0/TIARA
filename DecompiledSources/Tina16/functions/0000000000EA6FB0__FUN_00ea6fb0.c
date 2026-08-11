/* Ghidra address: 00ea6fb0 */
/* Ghidra symbol: FUN_00ea6fb0 */


undefined8 FUN_00ea6fb0(longlong *param_1,undefined8 param_2,ushort *param_3)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48;
  longlong local_40;
  ushort *local_38;
  ushort *local_30;
  ushort *local_28;
  ushort *local_20;
  
  local_58 = 0;
  local_40 = 0;
  uVar2 = (ulonglong)*param_3;
  local_20 = param_3;
  if (uVar2 < 0x10) {
    if (uVar2 - 2 < 2) {
LAB_00ea705f:
      iVar1 = FUN_00462650();
      goto LAB_00ea7087;
    }
    if (uVar2 - 2 != 6) {
LAB_00ea706a:
      FUN_0044d710(&PTR_FUN_00ea2d28,1,PTR_PTR_02004f30);
      iVar1 = FUN_004134c0();
      goto LAB_00ea7087;
    }
  }
  else {
    if (uVar2 - 0x10 < 4) goto LAB_00ea705f;
    if ((uVar2 != 0x100) && (uVar2 != 0x102)) goto LAB_00ea706a;
  }
  lVar3 = FUN_00411460(param_1[1],&DAT_00ea69f0);
  FUN_00467e90(&local_40,param_3);
  iVar1 = FUN_00ea4b00(*(undefined8 *)(lVar3 + 0x18),local_40);
LAB_00ea7087:
  if (iVar1 < 0) {
    bVar5 = false;
  }
  else {
    lVar3 = 0;
    if (*param_1 != 0) {
      lVar3 = *(longlong *)(*param_1 + -8);
    }
    bVar5 = iVar1 < lVar3;
  }
  if (bVar5) {
    FUN_00417c40(param_2,*param_1 + (longlong)iVar1 * 0x18,&DAT_00ea56e0);
  }
  else {
    if (iVar1 == -7) {
      if (*param_3 == 0x102) {
        bVar5 = true;
      }
      else {
        bVar5 = *param_3 == 0x100;
        local_30 = param_3;
      }
      local_28 = param_3;
      if (bVar5) {
        bVar5 = true;
      }
      else {
        bVar5 = *param_3 == 8;
        local_38 = param_3;
      }
    }
    else {
      bVar5 = false;
    }
    if (bVar5) {
      FUN_00467e90(&local_58,param_3);
      local_50 = local_58;
      local_48 = 0x11;
      uVar4 = FUN_0044d8d0(&PTR_FUN_00ea2d28,1,PTR_PTR_020022d0,&local_50,0);
      FUN_004134c0(uVar4);
    }
    else {
      local_50 = CONCAT44(local_50._4_4_,iVar1);
      local_48 = 0;
      uVar4 = FUN_0044d8d0(&PTR_FUN_00ea2d28,1,PTR_PTR_020013c8,&local_50,0);
      FUN_004134c0(uVar4);
    }
  }
  FUN_00414480(&local_58);
  FUN_00414480(&local_40);
  return param_2;
}

