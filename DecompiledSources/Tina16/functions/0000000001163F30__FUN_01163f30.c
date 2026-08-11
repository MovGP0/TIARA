/* Ghidra address: 01163f30 */
/* Ghidra symbol: FUN_01163f30 */


void FUN_01163f30(undefined8 param_1,undefined1 param_2,undefined8 *param_3)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  undefined8 uVar7;
  ulonglong uVar6;
  
  uVar7 = FUN_016eb990(param_1,param_2,1);
  *param_3 = uVar7;
  uVar7 = FUN_016eb990(param_1,param_2,2);
  param_3[1] = uVar7;
  uVar7 = FUN_016eb990(param_1,param_2,3);
  param_3[6] = uVar7;
  sVar1 = FUN_016eb820(param_1,param_2,4);
  *(int *)(param_3 + 7) = (int)sVar1;
  sVar1 = FUN_016eb820(param_1,param_2,5);
  uVar2 = FUN_00b905f0((int)sVar1,0x14);
  *(undefined4 *)(param_3 + 3) = uVar2;
  iVar3 = FUN_00b905e0(uVar2,2);
  uVar7 = FUN_004095c0((longlong)(iVar3 << 3));
  param_3[4] = uVar7;
  uVar7 = FUN_004095c0((longlong)(iVar3 << 3));
  param_3[5] = uVar7;
  if ((((param_3[4] != 0) && (param_3[5] != 0)) && (1 < *(int *)(param_3 + 3))) &&
     (uVar4 = 0, uVar6 = uVar4, -1 < iVar3 + -1)) {
    do {
      iVar5 = (int)uVar6;
      uVar4 = CONCAT62((int6)(uVar4 >> 0x10),(char)uVar6 * 2);
      uVar6 = uVar4 & 0xffffffff;
      uVar7 = FUN_016eb990(param_1,param_2,CONCAT71((int7)(uVar6 >> 8),(char)uVar6 + '\x06'));
      *(undefined8 *)(param_3[4] + (longlong)iVar5 * 8) = uVar7;
      uVar4 = uVar4 & 0xffffffff;
      uVar7 = FUN_016eb990(param_1,param_2,CONCAT71((int7)(uVar4 >> 8),(char)uVar4 + '\a'));
      uVar4 = param_3[5];
      *(undefined8 *)(uVar4 + (longlong)iVar5 * 8) = uVar7;
      iVar3 = iVar3 + -1;
      uVar6 = (ulonglong)(iVar5 + 1);
    } while (iVar3 != 0);
  }
  return;
}

