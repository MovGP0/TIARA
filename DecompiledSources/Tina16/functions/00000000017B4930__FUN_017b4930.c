/* Ghidra address: 017b4930 */
/* Ghidra symbol: FUN_017b4930 */


ulonglong FUN_017b4930(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  ulonglong uVar6;
  undefined1 auStack_78 [32];
  undefined1 local_58 [24];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  lVar1 = *param_1;
  (**(code **)(lVar1 + 0x40))(param_1,local_58);
  uVar4 = FUN_00498310(param_2,param_3);
  iVar2 = thunk_FUN_03f16006(local_58,uVar4);
  uVar6 = CONCAT71((int7)((ulonglong)lVar1 >> 8),iVar2 != 0);
  if (iVar2 != 0) {
    local_40 = FUN_00498310(param_2,param_3);
    iVar2 = (int)param_1[0xc];
    iVar5 = 0;
    if (-1 < iVar2 + -1) {
      do {
        local_30 = FUN_017b50b0(param_1,param_1[0xb] + (longlong)iVar5 * 8);
        if (iVar5 < (int)param_1[0xc] + -1) {
          local_38 = FUN_017b50b0(param_1,param_1[0xb] + (longlong)(iVar5 + 1) * 8);
        }
        else {
          local_38 = FUN_017b50b0(param_1,param_1[0xb]);
        }
        uVar3 = FUN_017b48a0(auStack_78,&local_30,&local_38,&local_40);
        uVar6 = (ulonglong)uVar3;
        if ((char)uVar3 != '\0') break;
        iVar5 = iVar5 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  return uVar6 & 0xffffffff;
}

