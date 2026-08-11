/* Ghidra address: 00b29370 */
/* Ghidra symbol: FUN_00b29370 */


undefined1 FUN_00b29370(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  undefined2 uVar5;
  int iVar6;
  ushort *puVar7;
  longlong lVar8;
  undefined8 uVar9;
  byte bVar10;
  undefined2 uVar11;
  undefined2 uVar12;
  undefined2 uVar13;
  bool bVar14;
  undefined1 local_67;
  int local_64;
  int local_60;
  int local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  char *local_30;
  
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_30 = (char *)0x0;
  local_38 = 0;
  local_67 = 0;
  if (*(longlong *)(*param_2 + 0x28) == 0) goto LAB_00b29964;
  puVar7 = (ushort *)FUN_00415ab0(*(undefined8 *)(*param_2 + 0x28));
  uVar3 = *puVar7;
  if ((uVar3 != 0) && (uVar3 != 0x20)) goto LAB_00b29964;
  bVar14 = (uVar3 & 0x20) != 0;
  bVar10 = *(byte *)(*(longlong *)(*param_2 + 0x28) + 3);
  uVar3 = *(ushort *)(*(longlong *)(*param_2 + 0x28) + 4);
  *(undefined2 *)(*param_2 + 0x10) = 0xffff;
  cVar1 = *(char *)(*(longlong *)(*param_2 + 0x28) + 0xe);
  if (bVar14) {
    bVar2 = *(byte *)(*(longlong *)(*param_2 + 0x28) + 0xf);
    if (bVar2 < 8) {
      if (bVar2 == 7) {
        *(undefined1 *)(*param_2 + 0x20) = 8;
      }
      else if (bVar2 < 4) {
        if (bVar2 == 3) {
          *(undefined1 *)(*param_2 + 0x20) = 4;
        }
        else if (bVar2 == 0) {
          *(undefined1 *)(*param_2 + 0x20) = 1;
        }
        else if (bVar2 == 1) {
          *(undefined1 *)(*param_2 + 0x20) = 2;
        }
        else {
          if (bVar2 != 2) goto LAB_00b295e4;
          *(undefined1 *)(*param_2 + 0x20) = 3;
        }
      }
      else if (bVar2 == 4) {
        *(undefined1 *)(*param_2 + 0x20) = 5;
      }
      else if (bVar2 == 5) {
        *(undefined1 *)(*param_2 + 0x20) = 6;
      }
      else {
        if (bVar2 != 6) goto LAB_00b295e4;
        *(undefined1 *)(*param_2 + 0x20) = 7;
      }
    }
    else if (bVar2 < 0xc) {
      if (bVar2 == 0xb) {
        *(undefined1 *)(*param_2 + 0x20) = 0xc;
      }
      else if (bVar2 == 8) {
        *(undefined1 *)(*param_2 + 0x20) = 9;
      }
      else if (bVar2 == 9) {
        *(undefined1 *)(*param_2 + 0x20) = 10;
      }
      else {
        if (bVar2 != 10) goto LAB_00b295e4;
        *(undefined1 *)(*param_2 + 0x20) = 0xb;
      }
    }
    else if (bVar2 == 0xc) {
      *(undefined1 *)(*param_2 + 0x20) = 0xd;
    }
    else if (bVar2 == 0xd) {
      *(undefined1 *)(*param_2 + 0x20) = 0xe;
    }
    else {
LAB_00b295e4:
      *(undefined1 *)(*param_2 + 0x20) = 0;
    }
  }
  if (cVar1 == '\x01') {
    bVar10 = bVar10 * '\x02';
    FUN_00415ad0(&local_38,*(undefined8 *)(*param_2 + 0x28),0x10,bVar10);
    FUN_00b15310(&local_40,local_38);
    FUN_00414b90(*param_2 + 8,local_40);
  }
  else {
    FUN_00415ad0(&local_38,*(undefined8 *)(*param_2 + 0x28),0x10,bVar10);
    FUN_00b15390(&local_48,local_38);
    FUN_00414b90(*param_2 + 8,local_48);
  }
  if (bVar14) {
    FUN_00b27d20(&local_50,*(undefined1 *)(*param_2 + 0x20));
    FUN_00414b90(*param_2 + 8,local_50);
  }
  FUN_00415ad0(&local_30,*(undefined8 *)(*param_2 + 0x28),bVar10 + 0x10,uVar3);
  local_64 = 1;
  if (local_30 != (char *)0x0) {
    if (*local_30 == ')') {
      local_64 = 4;
    }
    local_60 = 0;
    while (local_64 <= (int)(uint)uVar3) {
      uVar5 = 0;
      uVar11 = 0;
      uVar12 = 0;
      uVar13 = 0;
      lVar8 = FUN_00414df0(&local_30);
      bVar10 = *(byte *)(lVar8 + -1 + (longlong)local_64);
      if (bVar10 < 0x5c) {
        if (bVar10 == 0x5b) {
LAB_00b2977d:
          local_58 = 10;
        }
        else {
          if (bVar10 != 0x3a) {
            if (bVar10 == 0x3b) goto LAB_00b2977d;
            if (bVar10 != 0x5a) goto LAB_00b29787;
          }
LAB_00b29773:
          local_58 = 6;
        }
      }
      else {
        if (bVar10 == 0x7a) goto LAB_00b29773;
        if (bVar10 == 0x7b) goto LAB_00b2977d;
LAB_00b29787:
        local_58 = 0xffff;
      }
      if ((int)(uint)uVar3 < local_64 + local_58) break;
      lVar8 = FUN_00414df0(&local_30);
      uVar4 = *(ushort *)(lVar8 + -1 + (longlong)(local_64 + 1));
      iVar6 = FUN_00b28e10(param_1);
      if (iVar6 <= (int)(uint)uVar4) {
        uVar9 = FUN_00b146c0(&PTR_FUN_00b141e0,1,0xe);
        FUN_004134c0(uVar9);
      }
      lVar8 = FUN_00b28df0(param_1,uVar4);
      if (*(short *)(*param_2 + 0x10) == -1) {
        *(undefined2 *)(*param_2 + 0x10) = *(undefined2 *)(lVar8 + 2);
      }
      if (bVar10 < 0x5c) {
        if (bVar10 == 0x5b) {
LAB_00b29895:
          lVar8 = FUN_00414df0(&local_30);
          uVar5 = *(undefined2 *)(lVar8 + -1 + (longlong)(local_64 + 3));
          lVar8 = FUN_00414df0(&local_30);
          uVar11 = *(undefined2 *)(lVar8 + -1 + (longlong)(local_64 + 5));
          lVar8 = FUN_00414df0(&local_30);
          uVar12 = *(undefined2 *)(lVar8 + -1 + (longlong)(local_64 + 7));
          lVar8 = FUN_00414df0(&local_30);
          uVar13 = *(undefined2 *)(lVar8 + -1 + (longlong)(local_64 + 9));
        }
        else {
          if (bVar10 != 0x3a) {
            if (bVar10 == 0x3b) goto LAB_00b29895;
            uVar13 = 0;
            uVar12 = 0;
            uVar11 = 0;
            if (bVar10 != 0x5a) goto LAB_00b298f4;
          }
LAB_00b29860:
          lVar8 = FUN_00414df0(&local_30);
          uVar11 = *(undefined2 *)(lVar8 + -1 + (longlong)(local_64 + 3));
          lVar8 = FUN_00414df0(&local_30);
          uVar13 = *(undefined2 *)(lVar8 + -1 + (longlong)(local_64 + 5));
          uVar12 = uVar13;
          uVar5 = uVar11;
        }
      }
      else {
        if (bVar10 == 0x7a) goto LAB_00b29860;
        if (bVar10 == 0x7b) goto LAB_00b29895;
      }
LAB_00b298f4:
      FUN_00b22230(*(undefined8 *)(*param_2 + 0x18),uVar5,uVar11,uVar12,(char)uVar13);
      local_64 = local_64 + 1 + local_58;
      local_60 = local_60 + 1;
      if (1 < local_60) {
        local_64 = local_64 + 1;
      }
    }
    if (*(short *)(*param_2 + 0x10) != -1) {
      local_67 = 1;
    }
  }
LAB_00b29964:
  FUN_004145c0(&local_50,3);
  FUN_00414590(&local_38,2);
  return local_67;
}

