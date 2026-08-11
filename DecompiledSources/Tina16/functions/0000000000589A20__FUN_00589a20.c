/* Ghidra address: 00589a20 */
/* Ghidra symbol: FUN_00589a20 */


int FUN_00589a20(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  bool bVar5;
  int local_474;
  undefined8 local_470;
  longlong local_468;
  longlong local_460;
  byte *local_458;
  byte *local_450;
  longlong local_448;
  byte *local_440;
  byte *local_438;
  longlong local_430;
  undefined1 local_428 [1032];
  
  local_470 = 0;
  local_468 = 0;
  local_460 = 0;
  local_440 = (byte *)(param_1 + 1);
  local_448 = **(longlong **)(param_1 + 0xb + (ulonglong)*local_440);
  local_458 = (byte *)(local_448 + 1);
  lVar1 = local_448 + 2 + (ulonglong)*local_458;
  pbVar3 = (byte *)(lVar1 + 0x11);
  iVar4 = *(int *)(lVar1 + 5);
  local_474 = 0;
  local_450 = local_458;
  local_438 = local_440;
  local_430 = param_1;
  if (-1 < iVar4) {
    iVar4 = iVar4 + 1;
    do {
      FUN_0041d770(local_428,0x200,pbVar3 + 1,*pbVar3);
      FUN_00416830(&local_460,local_428,0x200);
      if (local_460 == param_2) {
        bVar5 = true;
      }
      else {
        FUN_00416830(&local_468,local_428,0x200);
        if ((local_468 == 0) || (param_2 == 0)) {
          bVar5 = false;
        }
        else {
          FUN_00416830(&local_470,local_428,0x200);
          iVar2 = FUN_0043e420(local_470,param_2);
          bVar5 = iVar2 == 0;
        }
      }
      if (bVar5) goto LAB_00589b7d;
      pbVar3 = pbVar3 + (*pbVar3 + 1);
      local_474 = local_474 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  local_474 = FUN_00589980(param_1,param_2);
LAB_00589b7d:
  FUN_00414560(&local_470,3);
  return local_474;
}

