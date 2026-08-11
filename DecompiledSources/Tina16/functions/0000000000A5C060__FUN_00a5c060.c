/* Ghidra address: 00a5c060 */
/* Ghidra symbol: FUN_00a5c060 */


void FUN_00a5c060(longlong param_1,longlong param_2,undefined8 param_3)

{
  char cVar1;
  char cVar2;
  int iVar3;
  undefined8 unaff_RBX;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_30 [7];
  undefined1 local_29 [9];
  
  local_40 = 0;
  local_38 = 0;
  uVar4 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),8);
  do {
    cVar1 = (char)uVar4;
    if ((byte)(cVar1 - 0x1eU) < 4) {
      uVar5 = uVar4 & 0xff;
      FUN_00467e90(&local_40,param_1 + 0x78 + uVar5 * 0x18);
      cVar2 = FUN_00a602d0(local_40,0,local_30);
      if (cVar2 == '\0') {
        FUN_00467e90(&local_38,param_1 + 0x78 + uVar5 * 0x18);
        iVar3 = FUN_00416db0(local_38,L"currentColor");
        if (iVar3 == 0) {
          FUN_00461840(param_2,param_1 + 0x120);
        }
        else {
          FUN_00461840(param_2,param_3);
        }
      }
      else {
        FUN_00461840(param_2,param_1 + 0x78 + uVar5 * 0x18);
      }
    }
    else if ((byte)(cVar1 - 0x22U) < 4) {
      local_29[0] = FUN_00462650(param_2);
      FUN_00a55240(param_1,uVar4 & 0xffffffff,local_29);
      FUN_00468530(param_2,local_29[0],1);
    }
    else {
      FUN_00461840(param_2,param_1 + 0x78 + (uVar4 & 0xff) * 0x18);
    }
    uVar4 = CONCAT71((int7)(uVar4 >> 8),cVar1 + '\x01');
    param_2 = param_2 + 0x18;
  } while ((char)(cVar1 + '\x01') != '.');
  FUN_00414560(&local_40,2);
  return;
}

