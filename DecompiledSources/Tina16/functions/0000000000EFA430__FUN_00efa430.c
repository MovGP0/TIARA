/* Ghidra address: 00efa430 */
/* Ghidra symbol: FUN_00efa430 */


undefined1 FUN_00efa430(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 *puVar5;
  double dVar6;
  undefined1 local_149;
  undefined8 local_148;
  undefined8 local_140 [2];
  int local_12c;
  undefined1 local_128;
  undefined1 local_127 [263];
  
  local_140[0] = 0;
  local_148 = 0;
  iVar2 = FUN_019b5ce0(param_1,param_2);
  if (iVar2 == 0) {
    local_149 = 0;
  }
  else if (iVar2 < 0x14) {
    uVar3 = FUN_019b5ce0(param_1,param_2);
    iVar2 = FUN_00b905f0(0xff,uVar3);
    local_128 = (undefined1)iVar2;
    iVar4 = 1;
    if (0 < iVar2) {
      puVar5 = local_127;
      do {
        uVar1 = FUN_019b60b0(param_1,iVar4 + -1,param_2);
        *puVar5 = uVar1;
        iVar4 = iVar4 + 1;
        puVar5 = puVar5 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    FUN_004154b0(local_140,&local_128,0);
    FUN_00416880(&local_148,local_140[0]);
    dVar6 = (double)FUN_00410100(local_148,&local_12c);
    if (local_12c == 0) {
      if (dVar6 == 0.0) {
        local_149 = 0;
      }
      else if (dVar6 == 1.0) {
        local_149 = 1;
      }
      else if (dVar6 == -1.0) {
        local_149 = 0xff;
      }
      else {
        local_149 = 10;
      }
    }
    else {
      local_149 = 10;
    }
  }
  else {
    local_149 = 10;
  }
  FUN_00414480(&local_148);
  FUN_004144d0(local_140);
  return local_149;
}

