/* Ghidra address: 015419f0 */
/* Ghidra symbol: FUN_015419f0 */


char FUN_015419f0(longlong param_1,undefined8 param_2,int param_3,undefined4 *param_4,
                 undefined8 *param_5,undefined4 *param_6,undefined4 *param_7)

{
  longlong lVar1;
  char cVar2;
  ushort uVar3;
  undefined4 uVar4;
  longlong lVar5;
  uint uVar6;
  longlong unaff_RSI;
  char cVar7;
  int iVar8;
  int local_2c;
  
  uVar3 = FUN_01d03160(param_2);
  FUN_00414480(param_5);
  *param_6 = 0xffffffff;
  *param_7 = 0xffffffff;
  cVar7 = '\0';
  *param_4 = 4;
  uVar6 = (uint)uVar3;
  if (uVar3 == 0x39) {
    cVar7 = '\x01';
  }
  else {
    cVar2 = FUN_01542af0(uVar3);
    if (cVar2 == '\0') {
      cVar2 = FUN_01542670(param_2);
      if (cVar2 != '\0') {
        *param_4 = 3;
        return '\x01';
      }
      iVar8 = *(int *)(param_1 + 0x10);
      local_2c = 0;
      if (-1 < iVar8 + -1) {
        do {
          unaff_RSI = FUN_01d347d0(param_1,local_2c);
          if (*(uint *)(unaff_RSI + 8) == uVar6) {
            cVar7 = '\x01';
            break;
          }
          local_2c = local_2c + 1;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
    }
    else {
      cVar7 = '\x01';
    }
  }
  if (cVar7 != '\0') {
    if (uVar6 == 0x39) {
      uVar4 = FUN_01542880(param_2,param_3,param_5,param_6,param_7);
      *param_4 = uVar4;
    }
    else {
      cVar2 = FUN_01542af0(uVar6);
      if (cVar2 == '\0') {
        lVar1 = *(longlong *)(unaff_RSI + 0x10);
        iVar8 = *(int *)(lVar1 + 0x10);
        local_2c = 0;
        if (-1 < iVar8 + -1) {
          do {
            lVar5 = FUN_01d347d0(lVar1,local_2c);
            if (*(int *)(lVar5 + 8) == param_3) {
              *param_4 = 1;
              return cVar7;
            }
            local_2c = local_2c + 1;
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
        }
        lVar1 = *(longlong *)(unaff_RSI + 0x18);
        iVar8 = *(int *)(lVar1 + 0x10);
        local_2c = 0;
        if (-1 < iVar8 + -1) {
          do {
            lVar5 = FUN_01d347d0(lVar1,local_2c);
            if (*(int *)(lVar5 + 8) == param_3) {
              *param_4 = 2;
              return cVar7;
            }
            local_2c = local_2c + 1;
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
        }
      }
      else {
        uVar4 = FUN_01542b20(param_2,param_3,*param_5);
        *param_4 = uVar4;
      }
    }
  }
  return cVar7;
}

