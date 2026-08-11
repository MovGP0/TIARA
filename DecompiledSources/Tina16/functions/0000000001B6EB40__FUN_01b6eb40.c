/* Ghidra address: 01b6eb40 */
/* Ghidra symbol: FUN_01b6eb40 */


void FUN_01b6eb40(longlong param_1,double param_2)

{
  undefined8 local_38;
  undefined1 local_30 [16];
  undefined8 local_20 [2];
  undefined8 local_10;
  
  local_20[0] = 0;
  local_38 = 0;
  local_10 = 0;
  FUN_00414480(&local_10);
  if (-1e+29 < param_2) {
    if (1e+29 <= param_2) {
      if (param_2 <= 1e+31) {
        if (param_2 <= 8e+30) {
          if (param_2 <= 7e+30) {
            if (param_2 <= 6e+30) {
              if (param_2 <= 5e+30) {
                FUN_00414b50(&local_10,L"------");
              }
              else {
                FUN_00414b50(&local_10,L"autoranging...");
              }
            }
            else {
              FUN_00414b50(&local_10,L"underrange");
            }
          }
          else {
            FUN_00414b50(&local_10,L"overrange");
          }
        }
        else {
          FUN_00414b50(&local_10,L"out of range");
        }
      }
      else {
        FUN_00414b50(&local_10,L"OL  ");
      }
      FUN_0064de00(*(undefined8 *)(param_1 + 0x978),local_10);
    }
    else {
      FUN_00b8fd60(&local_10,param_2,*PTR_DAT_02005310,0,1);
      FUN_00b909e0(local_30,*(undefined1 *)(param_1 + 0x9cb));
      FUN_004169a0(&local_38,local_30);
      FUN_00416ba0(local_20,local_10,local_38);
      FUN_0064de00(*(undefined8 *)(param_1 + 0x978),local_20[0]);
    }
  }
  FUN_00414480(&local_38);
  FUN_00414480(local_20);
  FUN_00414480(&local_10);
  return;
}

