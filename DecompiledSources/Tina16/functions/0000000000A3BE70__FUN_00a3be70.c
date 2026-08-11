/* Ghidra address: 00a3be70 */
/* Ghidra symbol: FUN_00a3be70 */


void FUN_00a3be70(longlong param_1,undefined8 param_2,char param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  undefined2 local_45c;
  undefined2 local_45a;
  undefined1 local_458 [1024];
  undefined1 local_58 [18];
  byte local_46;
  
  thunk_FUN_03d2c01a(param_2,0x20,local_58);
  FUN_00a39570(param_1);
  lVar3 = FUN_00a34be0(&PTR_FUN_00a30a98,1,param_1);
  FUN_00a3b770(lVar3,param_2,local_58);
  if (*(char *)(lVar3 + 0x40) == '\0') {
    lVar4 = 0;
  }
  else {
    lVar4 = FUN_00a33fb0(&PTR_FUN_00a31730,1,param_1);
  }
  if (param_3 == '\0') {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_00a33fb0(&PTR_FUN_00a31a70,1,param_1);
  }
  uVar6 = FUN_00a33fb0(&PTR_FUN_00a31db8,1,param_1);
  uVar7 = FUN_00a33fb0(&PTR_FUN_00a30850,1,param_1);
  FUN_00a33850(*(undefined8 *)(param_1 + 0x160),lVar3);
  if (*(char *)(lVar3 + 0x40) != '\0') {
    FUN_00a33850(*(undefined8 *)(param_1 + 0x160),lVar4);
  }
  if (param_3 != '\0') {
    FUN_00a33850(*(undefined8 *)(param_1 + 0x160),uVar5);
  }
  FUN_00a33850(*(undefined8 *)(param_1 + 0x160),uVar6);
  FUN_00a33850(*(undefined8 *)(param_1 + 0x160),uVar7);
  if (*(char *)(lVar3 + 0x40) != '\0') {
    *(int *)(lVar4 + 0x28) = 1 << (local_46 & 0x1f);
    FUN_0040d200(&local_45c,0x404,0);
    local_45c = 0x300;
    uVar1 = 1 << (local_46 & 0x1f);
    local_45a = (undefined2)uVar1;
    uVar1 = uVar1 & 0xffff;
    iVar2 = 0;
    if (-1 < (int)(uVar1 - 1)) {
      puVar8 = local_458;
      do {
        lVar4 = (longlong)iVar2;
        *puVar8 = *(undefined1 *)(lVar3 + 0x6e + lVar4 * 4);
        puVar8[1] = *(undefined1 *)(lVar3 + 0x6d + lVar4 * 4);
        puVar8[2] = *(undefined1 *)(lVar3 + 0x6c + lVar4 * 4);
        iVar2 = iVar2 + 1;
        puVar8 = puVar8 + 4;
        uVar1 = uVar1 - 1;
      } while (uVar1 != 0);
    }
    uVar6 = thunk_FUN_04123694(&local_45c);
    FUN_00a3d510(param_1,uVar6,0);
  }
  if (param_3 != '\0') {
    FUN_00a35740(uVar5,param_4);
  }
  return;
}

