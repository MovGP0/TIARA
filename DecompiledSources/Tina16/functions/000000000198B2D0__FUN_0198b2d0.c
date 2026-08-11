/* Ghidra address: 0198b2d0 */
/* Ghidra symbol: FUN_0198b2d0 */


undefined8 *
FUN_0198b2d0(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 local_res10 [3];
  undefined1 local_38 [24];
  
  local_res10[0] = param_2;
  puVar2 = (undefined8 *)FUN_00410920(param_1,local_res10);
  if (puVar2 != (undefined8 *)0xffffffffffffffff) {
    FUN_00b95480(puVar2,0,200,100);
    cVar1 = FUN_0198acc0(puVar2,param_3);
    if (cVar1 == '\0') {
      FUN_00414480(puVar2 + 0x46);
      puVar2[0x45] = 0;
      FUN_00b95be0(local_38,0,0,1,1);
      lVar3 = FUN_01a976c0(0,&PTR_FUN_01a96ef0,param_4,local_38);
      puVar2[0x42] = lVar3;
      param_1 = puVar2;
      if (lVar3 != 0) {
        FUN_012beda0(puVar2[0x1b],0);
      }
    }
    else {
      (**(code **)*puVar2)(puVar2);
      param_1 = (undefined8 *)FUN_004109a0(puVar2,local_res10[0]);
    }
  }
  return param_1;
}

