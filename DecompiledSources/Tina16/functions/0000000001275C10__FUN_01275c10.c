/* Ghidra address: 01275c10 */
/* Ghidra symbol: FUN_01275c10 */


char FUN_01275c10(longlong *param_1,longlong param_2,byte param_3,float *param_4)

{
  double dVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  float fVar5;
  longlong *local_res8;
  longlong local_res10;
  byte local_res18;
  float *local_res20;
  undefined1 auStack_168 [40];
  undefined1 local_140 [256];
  undefined1 *local_40;
  longlong local_38;
  longlong *local_30;
  longlong local_28;
  char local_19;
  
  local_40 = auStack_168;
  local_28 = 0;
  local_30 = (longlong *)0x0;
  local_38 = 0;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_0041b910(param_1);
  FUN_00414610(local_res10);
  local_19 = local_res8 != (longlong *)0x0;
  FUN_00414480(&local_38);
  if (local_19 != '\0') {
    if (local_res10 == 0) {
      FUN_0041b840(&local_28,local_res8);
    }
    else {
      (**(code **)(*local_res8 + 0xd8))(local_res8,&local_28,local_res10);
      local_19 = local_28 != 0;
    }
    if (local_19 != '\0') {
      FUN_0041b890(&local_30,local_28,&DAT_01275fd0);
      (**(code **)(*local_30 + 0x100))(local_30,&local_38,L"value");
      if (local_res18 < 8) {
        if (local_res18 == 7) {
          if (local_38 != 0) {
            FUN_00414ad0(local_res20,local_38);
          }
        }
        else if (local_res18 == 0) {
          uVar4 = FUN_0043fc00(local_38);
          *(undefined2 *)local_res20 = uVar4;
        }
        else if (local_res18 == 2) {
          fVar5 = (float)FUN_0043fc00(local_38);
          *local_res20 = fVar5;
        }
        else if (local_res18 == 5) {
          uVar2 = FUN_00b8f030(local_38);
          *(undefined8 *)local_res20 = uVar2;
        }
        else if (local_res18 == 6) {
          dVar1 = (double)FUN_00b8f030(local_38);
          *local_res20 = (float)dVar1;
        }
      }
      else if (local_res18 == 8) {
        uVar3 = FUN_0043fc00(local_38);
        *(undefined1 *)local_res20 = uVar3;
      }
      else if (local_res18 == 9) {
        FUN_00416910(local_140,local_38,0xff);
        FUN_00415020(local_res20,local_140,0x1e);
      }
      else if (local_res18 == 10) {
        FUN_00414ad0(local_res20,local_38);
      }
    }
  }
  FUN_00414480(&local_38);
  FUN_0041b800(&local_30);
  FUN_0041b800(&local_28);
  FUN_0041b800(&local_res8);
  FUN_00414480(&local_res10);
  return local_19;
}

