/* Ghidra address: 0172c410 */
/* Ghidra symbol: FUN_0172c410 */


void FUN_0172c410(undefined8 param_1,undefined4 param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 param_5,undefined2 *param_6,undefined8 param_7,undefined1 *param_8)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined1 local_12a [256];
  undefined1 local_2a [10];
  
  lVar2 = FUN_0172bd70(&PTR_FUN_01729478,CONCAT71((int7)((ulonglong)param_3 >> 8),1) & 0xffffffff,
                       param_1,param_2,*(undefined8 *)PTR_DAT_02001f18,1);
  uVar1 = *(undefined1 *)(lVar2 + 0x169);
  *param_8 = uVar1;
  FUN_0172cfa0(lVar2,uVar1,param_3,param_4,param_5,param_6,param_7,local_2a);
  FUN_0172cc40(lVar2,*(undefined2 *)(lVar2 + 0x16a),*param_6,*param_3,*param_4,local_12a,0xff);
  FUN_00410f20(lVar2);
  return;
}

