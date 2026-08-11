/* Ghidra address: 00e86120 */
/* Ghidra symbol: FUN_00e86120 */


uint FUN_00e86120(short *param_1,int *param_2,int param_3)

{
  short *psVar1;
  int iVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  ushort *puVar7;
  uint uVar8;
  int iVar9;
  int local_4c;
  int *local_48;
  
  *param_2 = -1;
  uVar3 = *param_1 - 0x85;
  uVar8 = 0;
  iVar9 = -1;
  local_48 = param_2;
LAB_00e86170:
  if (uVar3 < 7) {
    lVar6 = *(longlong *)(&DAT_01ee10e0 + (longlong)(short)uVar3 * 8);
  }
  else {
    lVar6 = 0;
  }
  puVar7 = (ushort *)(param_1 + lVar6 + 2);
  do {
    uVar3 = *puVar7;
    switch(uVar3 - 4) {
    default:
      goto LAB_00e86291;
    case 0x19:
    case 0x1f:
    case 0x20:
    case 0x27:
      goto switchD_00e861c7_caseD_19;
    case 0x1a:
    case 0x2c:
    case 0x2d:
    case 0x34:
      goto switchD_00e861c7_caseD_1a;
    case 0x25:
      puVar7 = puVar7 + 1;
      goto switchD_00e861c7_caseD_19;
    case 0x32:
      puVar7 = puVar7 + 1;
switchD_00e861c7_caseD_1a:
      if (param_3 == 0) {
        return 0;
      }
      uVar5 = (uint)puVar7[1];
      if (-1 < iVar9) goto LAB_00e8625e;
      iVar2 = 1;
      uVar4 = uVar5;
      goto LAB_00e8626c;
    case 0x79:
    case 0x7d:
    case 0x7e:
    case 0x7f:
    case 0x80:
    case 0x81:
    case 0x82:
    case 0x86:
    case 0x87:
      uVar4 = FUN_00e86120(puVar7,&local_4c,uVar3 == 0x7d);
      if (local_4c < 0) {
        return 0;
      }
      iVar2 = local_4c;
      if (-1 < iVar9) {
        if (uVar8 != uVar4) {
          return 0;
        }
        iVar2 = iVar9;
        uVar4 = uVar8;
        if (iVar9 != local_4c) {
          return 0;
        }
      }
      goto LAB_00e8626c;
    case 0x7a:
    case 0x7b:
    case 0x7c:
      do {
        uVar3 = puVar7[puVar7[1]];
        puVar7 = puVar7 + puVar7[1];
      } while (uVar3 == 0x77);
    case 0:
    case 1:
    case 0x72:
    case 0x89:
    case 0x8a:
    case 0x8b:
    case 0x8c:
    case 0x8d:
      puVar7 = puVar7 + (byte)(&DAT_01ee1510)[uVar3];
    }
  } while( true );
switchD_00e861c7_caseD_19:
  if (param_3 == 0) {
LAB_00e86291:
    return 0;
  }
  uVar5 = (uint)puVar7[1];
  if (iVar9 < 0) {
    iVar2 = 0;
    uVar4 = uVar5;
  }
  else {
LAB_00e8625e:
    iVar2 = iVar9;
    uVar4 = uVar8;
    if (uVar8 != uVar5) {
      return 0;
    }
  }
LAB_00e8626c:
  uVar8 = uVar4;
  iVar9 = iVar2;
  psVar1 = param_1 + (ushort)param_1[1];
  param_1 = param_1 + (ushort)param_1[1];
  uVar3 = 0xfff2;
  if (*psVar1 != 0x77) {
    *local_48 = iVar9;
    return uVar8;
  }
  goto LAB_00e86170;
}

