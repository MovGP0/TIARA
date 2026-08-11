/* Ghidra address: 00ea0200 */
/* Ghidra symbol: FUN_00ea0200 */


undefined8 FUN_00ea0200(int *param_1,byte *param_2,undefined4 param_3,ulonglong *param_4)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  
  if (param_1 == (int *)0x0) {
    return 0xfffffffe;
  }
  if (param_4 == (ulonglong *)0x0) {
    return 0xfffffffe;
  }
  if ((param_2 == (byte *)0x0) || ((*param_2 & 1) == 0)) {
    puVar3 = (uint *)0x0;
  }
  else {
    puVar3 = *(uint **)(param_2 + 8);
  }
  if (*param_1 != 0x50435245) {
    if (*param_1 == 0x45524350) {
      return 0xffffffe3;
    }
    return 0xfffffffc;
  }
  uVar2 = param_1[3];
  if ((uVar2 & 2) == 0) {
    return 0xffffffe4;
  }
  switch(param_3) {
  case 0:
    *(uint *)param_4 = param_1[2] & 0x27ff7a7f;
    break;
  case 1:
    *param_4 = (ulonglong)(uint)param_1[1];
    break;
  case 2:
    *(uint *)param_4 = (uint)*(ushort *)((longlong)param_1 + 0x1e);
    break;
  case 3:
    *(uint *)param_4 = (uint)*(ushort *)(param_1 + 8);
    break;
  case 4:
    if ((uVar2 & 0x10) == 0) {
      uVar2 = uVar2 >> 8 | 0xfffffffe;
    }
    else {
      uVar2 = (uint)*(ushort *)(param_1 + 6);
    }
    goto LAB_00ea044b;
  case 5:
    if ((puVar3 != (uint *)0x0) && ((puVar3[1] & 1) != 0)) {
      *param_4 = *(longlong *)(param_2 + 8) + 8;
      return 0;
    }
    goto LAB_00ea033f;
  case 6:
    uVar1 = 0xffffffff;
    if ((uVar2 & 0x40) != 0) {
      *(uint *)param_4 = (uint)*(ushort *)((longlong)param_1 + 0x1a);
      return 0;
    }
    goto LAB_00ea038b;
  case 7:
    *(uint *)param_4 = (uint)*(ushort *)(param_1 + 9);
    break;
  case 8:
    *(uint *)param_4 = (uint)*(ushort *)((longlong)param_1 + 0x26);
    break;
  case 9:
    *param_4 = (longlong)param_1 + (ulonglong)*(ushort *)((longlong)param_1 + 0x22) * 2;
    break;
  case 10:
    if (puVar3 != (uint *)0x0) {
      *param_4 = (ulonglong)*puVar3;
      return 0;
    }
LAB_00ea033f:
    *param_4 = 0;
    return 0;
  case 0xb:
    *param_4 = (ulonglong)&DAT_01ef3ce0;
    break;
  case 0xc:
    uVar2 = ~(uVar2 >> 9);
    goto LAB_00ea0447;
  case 0xd:
    uVar2 = uVar2 >> 10;
    goto LAB_00ea0447;
  case 0xe:
    uVar2 = uVar2 >> 0xb;
    goto LAB_00ea0447;
  case 0xf:
    uVar1 = 0xffffffff;
    if ((puVar3 != (uint *)0x0) && ((puVar3[1] & 2) != 0)) {
      uVar1 = puVar3[10];
    }
LAB_00ea038b:
    *(uint *)param_4 = uVar1;
    break;
  case 0x10:
    uVar2 = 0;
    if ((param_2 != (byte *)0x0) && (uVar2 = 0, (*param_2 & 0x40) != 0)) {
      uVar2 = (uint)(*(longlong *)(param_2 + 0x38) != 0);
    }
    *(uint *)param_4 = uVar2;
    return 0;
  case 0x11:
    *param_4 = 0;
    break;
  case 0x12:
    *(uint *)param_4 = (uint)*(ushort *)(param_1 + 7);
    break;
  case 0x13:
    uVar1 = 0;
    if ((uVar2 & 0x10) != 0) {
      uVar1 = (uint)*(ushort *)(param_1 + 6);
    }
    goto LAB_00ea040e;
  case 0x14:
    uVar1 = 1;
    if ((uVar2 & 0x10) == 0) {
      uVar1 = uVar2 >> 7 & 2;
    }
    *(uint *)param_4 = uVar1;
    break;
  case 0x15:
    uVar1 = 0;
    if ((uVar2 & 0x40) != 0) {
      uVar1 = (uint)*(ushort *)((longlong)param_1 + 0x1a);
    }
LAB_00ea040e:
    *(uint *)param_4 = uVar1;
    return 0;
  case 0x16:
    uVar2 = uVar2 >> 6;
    goto LAB_00ea0447;
  case 0x17:
    if ((uVar2 & 0x2000) == 0) {
      return 0xffffffdf;
    }
    *(int *)param_4 = param_1[4];
    break;
  case 0x18:
    if ((uVar2 & 0x4000) == 0) {
      return 0xffffffdf;
    }
    *(int *)param_4 = param_1[5];
    break;
  case 0x19:
    uVar2 = uVar2 >> 0xf;
LAB_00ea0447:
    uVar2 = uVar2 & 1;
LAB_00ea044b:
    *(uint *)param_4 = uVar2;
    break;
  default:
    return 0xfffffffd;
  }
  return 0;
}

