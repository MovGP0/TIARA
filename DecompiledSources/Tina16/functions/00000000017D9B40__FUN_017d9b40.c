/* Ghidra address: 017d9b40 */
/* Ghidra symbol: FUN_017d9b40 */


undefined8 FUN_017d9b40(longlong param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  uVar6 = 0;
  if (*(char *)(param_1 + 0x18) == '\x02') {
    uVar2 = *(uint *)(param_1 + 0x1d8);
    uVar5 = (ulonglong)uVar2;
    if (param_2 == -1) {
      uVar4 = (longlong)(int)(uVar2 + 1) %
              (longlong)*(int *)(*(longlong *)(param_1 + 0x10) + 0x12c0);
      uVar5 = uVar4 & 0xffffffff;
      param_2 = (int)uVar4;
      *(int *)(param_1 + 0x1d8) = param_2;
    }
    else {
      *(int *)(param_1 + 0x1d8) = param_2;
    }
    uVar6 = CONCAT71((int7)(uVar5 >> 8),1);
    if (param_2 == 0) {
      *(undefined4 *)(param_1 + 0x114) = 0;
      *(undefined4 *)(param_1 + 0x110) = 1;
    }
    else if (param_2 == 1) {
      *(undefined4 *)(param_1 + 0x114) = 0;
      *(undefined4 *)(param_1 + 0x110) = 0;
    }
    else if (param_2 == 2) {
      *(undefined4 *)(param_1 + 0x114) = 1;
      *(undefined4 *)(param_1 + 0x110) = 1;
    }
    else if (param_2 == 3) {
      *(undefined4 *)(param_1 + 0x114) = 1;
      *(undefined4 *)(param_1 + 0x110) = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0x114) = 0;
      *(undefined4 *)(param_1 + 0x110) = 1;
      uVar6 = 0;
    }
    if ((char)uVar6 != '\0') {
      lVar3 = *(longlong *)(param_1 + 0x10);
      lVar7 = (longlong)(int)uVar2;
      piVar1 = (int *)(lVar3 + 0x1258 + lVar7 * 0x20);
      *piVar1 = *piVar1 + (*(int *)(lVar3 + 0x120c) - *(int *)(lVar3 + 0x122c));
      piVar1 = (int *)(lVar3 + 0x125c + lVar7 * 0x20);
      *piVar1 = *piVar1 + (*(int *)(lVar3 + 0x1218) - *(int *)(lVar3 + 0x1238));
      piVar1 = (int *)(lVar3 + 0x1254 + lVar7 * 0x20);
      *piVar1 = *piVar1 + (*(int *)(lVar3 + 0x1208) - *(int *)(lVar3 + 0x1228));
      *(undefined1 *)(lVar3 + 0x1240 + lVar7 * 0x20) = 0;
      piVar1 = (int *)(lVar3 + 0x1250 + (longlong)*(int *)(param_1 + 0x1d8) * 0x20);
      *piVar1 = *piVar1 + 1;
      *(undefined1 *)(lVar3 + 0x1240 + (longlong)*(int *)(param_1 + 0x1d8) * 0x20) = 1;
      *(undefined4 *)(lVar3 + 0x122c) = *(undefined4 *)(lVar3 + 0x120c);
      *(undefined4 *)(lVar3 + 0x1238) = *(undefined4 *)(lVar3 + 0x1218);
      *(undefined4 *)(lVar3 + 0x1228) = *(undefined4 *)(lVar3 + 0x1208);
      *(undefined1 *)(param_1 + 0x90) = 0;
      *(undefined1 *)(param_1 + 0x91) = 0;
    }
  }
  return uVar6;
}

