/* Ghidra address: 005d0b90 */
/* Ghidra symbol: FUN_005d0b90 */


void FUN_005d0b90(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 char param_5)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 local_288 [616];
  
  *param_2 = 0;
  *param_3 = 0;
  *param_4 = 0;
  cVar1 = FUN_00440e00(param_1,local_288,1);
  if (cVar1 != '\0') {
    if (param_5 == '\0') {
      uVar3 = FUN_0043db70(local_288);
      lVar2 = FUN_005c05d0(*(undefined8 *)PTR_DAT_020041f0,uVar3,0);
      uVar3 = FUN_005bbcb0(uVar3,lVar2 * -1000);
      *param_2 = uVar3;
      uVar3 = FUN_0043db90(local_288);
      lVar2 = FUN_005c05d0(*(undefined8 *)PTR_DAT_020041f0,uVar3,0);
      uVar3 = FUN_005bbcb0(uVar3,lVar2 * -1000);
      *param_3 = uVar3;
      uVar3 = FUN_0043dbb0(local_288);
      lVar2 = FUN_005c05d0(*(undefined8 *)PTR_DAT_020041f0,uVar3,0);
      uVar3 = FUN_005bbcb0(uVar3,lVar2 * -1000);
      *param_4 = uVar3;
    }
    else {
      uVar3 = FUN_0043db70(local_288);
      *param_2 = uVar3;
      uVar3 = FUN_0043db90(local_288);
      *param_3 = uVar3;
      uVar3 = FUN_0043dbb0(local_288);
      *param_4 = uVar3;
    }
  }
  return;
}

