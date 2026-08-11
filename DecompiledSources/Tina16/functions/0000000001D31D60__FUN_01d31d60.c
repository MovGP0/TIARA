/* Ghidra address: 01d31d60 */
/* Ghidra symbol: FUN_01d31d60 */


void FUN_01d31d60(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  ulonglong uVar2;
  char cVar3;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  FUN_005fccd0(param_2,local_20);
  FUN_01d313e0(param_1,local_20[0]);
  FUN_01d31740(param_1,*(undefined4 *)(param_2 + 0x28));
  uVar1 = FUN_005fce00(param_2);
  FUN_01d31740(param_1,uVar1);
  uVar2 = FUN_005fce60(param_2);
  cVar3 = (uVar2 & 1) != 0;
  uVar2 = FUN_005fce60(param_2);
  if ((uVar2 & 2) != 0) {
    cVar3 = cVar3 + '\x02';
  }
  uVar2 = FUN_005fce60(param_2);
  if ((uVar2 & 4) != 0) {
    cVar3 = cVar3 + '\x04';
  }
  uVar2 = FUN_005fce60(param_2);
  if ((uVar2 & 8) != 0) {
    cVar3 = cVar3 + '\b';
  }
  FUN_01d31740(param_1,cVar3);
  FUN_00414480(local_20);
  return;
}

