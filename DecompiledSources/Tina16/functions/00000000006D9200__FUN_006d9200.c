/* Ghidra address: 006d9200 */
/* Ghidra symbol: FUN_006d9200 */


void FUN_006d9200(longlong param_1,undefined4 param_2,char param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined1 local_40 [16];
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  cVar1 = FUN_0065be20(param_1);
  if (cVar1 != '\0') {
    lVar5 = FUN_006d8710(*(undefined8 *)(param_1 + 0x490),param_2);
    if (param_3 == '\0') {
      *(undefined1 *)(lVar5 + 0x29) = 1;
      uVar6 = FUN_0065b870(param_1);
      iVar2 = FUN_004b1870(lVar5);
      FUN_004701b0(uVar6,0x40a,(longlong)iVar2,local_40,0);
      uVar6 = FUN_0065b870(param_1);
      thunk_FUN_03a2fc9d(uVar6,local_40,0xffffffff);
    }
    else if (*(char *)(lVar5 + 0x29) != '\0') {
      *(undefined1 *)(lVar5 + 0x29) = 0;
      uVar7 = 0;
      if (*(char *)(lVar5 + 0x25) == '\0') {
        uVar7 = 0x100;
      }
      else if (*(char *)(lVar5 + 0x25) == '\x02') {
        uVar7 = 0x200;
      }
      cVar1 = FUN_006d84e0(lVar5);
      if (cVar1 != '\0') {
        uVar7 = uVar7 | 0x400;
      }
      if (*(char *)(lVar5 + 0x28) == '\x01') {
        uVar7 = uVar7 | 0x1000;
      }
      FUN_00414b50(local_30,*(undefined8 *)(lVar5 + 0x18));
      cVar1 = FUN_006d8500(lVar5);
      if (cVar1 == '\0') {
        if (*(char *)(lVar5 + 0x24) == '\x01') {
          FUN_00416ea0(&LAB_006d93e4,local_30,1);
        }
        else if (*(char *)(lVar5 + 0x24) == '\x02') {
          FUN_00416ea0(&DAT_006d93d4,local_30,1);
        }
      }
      else {
        uVar3 = FUN_006d8500(lVar5);
        FUN_006d8ca0(param_1,local_30,*(undefined1 *)(lVar5 + 0x24),uVar3);
      }
      uVar6 = FUN_0065b870(param_1);
      uVar4 = FUN_004b1870(lVar5);
      FUN_00470120(uVar6,0x40b,(longlong)(int)(uVar4 | uVar7),local_30[0]);
    }
  }
  FUN_00414480(local_30);
  return;
}

