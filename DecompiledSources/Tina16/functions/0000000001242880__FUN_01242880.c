/* Ghidra address: 01242880 */
/* Ghidra symbol: FUN_01242880 */


longlong * FUN_01242880(longlong *param_1,longlong param_2)

{
  ushort uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  longlong local_res10 [3];
  undefined8 local_20;
  
  local_20 = 0;
  local_res10[0] = param_2;
  FUN_00414650(local_res10);
  FUN_00414520(param_1);
  lVar2 = local_res10[0];
  iVar5 = 0;
  uVar3 = 0;
  if (local_res10[0] != 0) {
    uVar3 = *(uint *)(local_res10[0] + -4) >> 1;
  }
  if (uVar3 != 0) {
    uVar3 = 0;
    if (local_res10[0] != 0) {
      uVar3 = *(uint *)(local_res10[0] + -4) >> 1;
    }
    FUN_00417320(&local_20,0x20,uVar3);
    FUN_004168e0(param_1,local_20);
    uVar3 = 0;
    if (lVar2 != 0) {
      uVar3 = *(uint *)(lVar2 + -4) >> 1;
    }
    iVar4 = 1;
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      uVar1 = *(ushort *)(local_res10[0] + -2 + (longlong)iVar4 * 2);
      if ((((((uVar1 == 9) || (uVar1 == 10)) || (uVar1 == 0xd)) ||
           ((0x1f < uVar1 && (uVar1 < 0xd800)))) || ((0xdfff < uVar1 && (uVar1 < 0xfffe)))) ||
         ((0xffff < uVar1 && (uVar1 < 0x110000)))) {
        iVar5 = iVar5 + 1;
        *(undefined2 *)(*param_1 + -2 + (longlong)iVar5 * 2) =
             *(undefined2 *)(local_res10[0] + -2 + (longlong)iVar4 * 2);
      }
      iVar4 = iVar4 + 1;
    }
    FUN_00416430(param_1,*param_1,1,iVar5);
  }
  FUN_00414480(&local_20);
  FUN_00414520(local_res10);
  return param_1;
}

