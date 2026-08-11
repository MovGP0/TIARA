/* Ghidra address: 00e85ef0 */
/* Ghidra symbol: FUN_00e85ef0 */


undefined8 FUN_00e85ef0(ushort *param_1,uint param_2,longlong param_3,int param_4)

{
  byte *pbVar1;
  ushort *puVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  ushort *puVar7;
  
  uVar5 = (ulonglong)*param_1;
  puVar7 = param_1;
switchD_00e86028_caseD_0:
  do {
    pbVar1 = &DAT_01ee1510 + uVar5;
    puVar2 = param_1 + *pbVar1;
    uVar4 = (uint)*puVar2;
    uVar5 = (ulonglong)uVar4;
    param_1 = param_1 + *pbVar1;
    iVar3 = param_4;
    uVar6 = param_2;
    switch(uVar4 - 0x76 & 0xffff) {
    case 0:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1a:
    case 0x1b:
      goto switchD_00e86028_caseD_0;
    default:
      iVar3 = param_4 + 1;
      if ((uVar4 - 0x81 & 0xffff) < 2) goto LAB_00e8605e;
      if ((0x1b < uVar4) || ((0x8000006UL >> ((ulonglong)*puVar2 & 0x3f) & 1) == 0)) {
        if (9 < (uVar4 - 0x55 & 0xffff)) {
          return 0;
        }
        if ((0x203U >> (uVar4 - 0x55 & 0x1f) & 1) == 0) {
          return 0;
        }
        if (param_1[1] != 0xd) {
          return 0;
        }
        if (0 < param_4) {
          return 0;
        }
        if ((*(uint *)(param_3 + 0x80) & param_2) != 0) {
          return 0;
        }
        if (*(int *)(param_3 + 0xa0) != 0) {
          return 0;
        }
      }
      break;
    case 7:
    case 0xd:
    case 0xe:
    case 0x12:
    case 0x13:
      goto LAB_00e8605e;
    case 0xf:
    case 0x10:
    case 0x14:
    case 0x15:
      uVar6 = 1 << ((byte)param_1[2] & 0x1f);
      if (0x1f < param_1[2]) {
        uVar6 = 1;
      }
      uVar6 = uVar6 | param_2;
LAB_00e8605e:
      iVar3 = FUN_00e85ef0(param_1,uVar6,param_3,iVar3);
      if (iVar3 == 0) {
        return 0;
      }
      break;
    case 0x11:
      if (param_1[param_1[1]] != 0x77) {
        return 0;
      }
      iVar3 = FUN_00e85ef0(param_1,param_2,param_3,param_4);
      if (iVar3 == 0) {
        return 0;
      }
    }
    puVar2 = puVar7 + puVar7[1];
    param_1 = puVar7 + puVar7[1];
    uVar5 = 0x77;
    puVar7 = param_1;
    if (*puVar2 != 0x77) {
      return 1;
    }
  } while( true );
}

