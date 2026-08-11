/* Ghidra address: 0172c310 */
/* Ghidra symbol: FUN_0172c310 */


void FUN_0172c310(undefined8 param_1,undefined4 param_2,ulonglong param_3,undefined8 *param_4,
                 undefined8 *param_5,undefined1 *param_6,undefined8 param_7)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_0172bd70(&PTR_FUN_01729478,CONCAT71((int7)(param_3 >> 8),1) & 0xffffffff,param_1,
                       param_2,*(undefined8 *)PTR_DAT_02001f18,1);
  if (*(char *)(lVar1 + 0x16c) != '\0') {
    uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
    FUN_0172d140(lVar1,*(undefined1 *)(lVar1 + 0x169),param_3 & 0xffffffff,uVar2,param_4,param_5,
                 param_6,param_7);
    FUN_0172d5d0(lVar1,*(undefined1 *)(lVar1 + 0x169),param_3 & 0xffffffff,*param_6,*param_4,
                 *param_5);
    FUN_00410f20(uVar2);
    FUN_00410f20(lVar1);
  }
  return;
}

