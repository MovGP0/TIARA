/* Ghidra address: 00e834b0 */
/* Ghidra symbol: FUN_00e834b0 */


ushort * FUN_00e834b0(ushort *param_1,int param_2,uint param_3)

{
  ushort uVar1;
  ulonglong uVar2;
  
LAB_00e834e8:
  uVar1 = *param_1;
  uVar2 = (ulonglong)uVar1;
  switch(uVar2) {
  case 0:
    return (ushort *)0x0;
  case 0x55:
  case 0x56:
  case 0x57:
  case 0x58:
  case 0x59:
  case 0x5a:
  case 0x5e:
  case 0x5f:
  case 0x60:
    if ((ushort)(param_1[1] - 0xf) < 2) {
      param_1 = param_1 + 2;
    }
    break;
  case 0x5b:
  case 0x5c:
  case 0x5d:
  case 0x61:
    if ((ushort)(param_1[2] - 0xf) < 2) {
      param_1 = param_1 + 2;
    }
    break;
  case 0x70:
    param_1 = param_1 + param_1[1];
    goto LAB_00e834e8;
  case 0x7c:
    if ((int)param_3 < 0) {
      return param_1;
    }
    param_1 = param_1 + DAT_01ee158c;
    goto LAB_00e834e8;
  case 0x85:
  case 0x86:
  case 0x8a:
  case 0x8b:
    goto switchD_00e834fc_caseD_85;
  case 0x95:
  case 0x97:
  case 0x99:
  case 0x9b:
    param_1 = param_1 + param_1[1];
  }
  param_1 = param_1 + (byte)(&DAT_01ee1510)[uVar2];
  if (((param_2 != 0) && (uVar1 - 0x1d < 0x38)) && ((param_1[-1] & 0xfc00) == 0xd800)) {
    param_1 = param_1 + 1;
  }
  goto LAB_00e834e8;
switchD_00e834fc_caseD_85:
  if (param_1[2] == param_3) {
    return param_1;
  }
  param_1 = param_1 + (byte)(&DAT_01ee1510)[uVar2];
  goto LAB_00e834e8;
}

