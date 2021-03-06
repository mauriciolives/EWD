<ewd:comment>
  ----------------------------------------------------------------------------
  | Enterprise Web Developer for GT.M and m_apache                           |
  | Copyright (c) 2004-9 M/Gateway Developments Ltd,                         |
  | Reigate, Surrey UK.                                                      |
  | All rights reserved.                                                     |
  |                                                                          |
  | http://www.mgateway.com                                                  |
  | Email: rtweed@mgateway.com                                               |
  |                                                                          |
  | This program is free software: you can redistribute it and/or modify     |
  | it under the terms of the GNU Affero General Public License as           |
  | published by the Free Software Foundation, either version 3 of the       |
  | License, or (at your option) any later version.                          |
  |                                                                          |
  | This program is distributed in the hope that it will be useful,          |
  | but WITHOUT ANY WARRANTY; without even the implied warranty of           |
  | MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the            |
  | GNU Affero General Public License for more details.                      |
  |                                                                          |
  | You should have received a copy of the GNU Affero General Public License |
  | along with this program.  If not, see http://www.gnu.org/licenses/.      |
  ----------------------------------------------------------------------------
</ewd:comment>

<h5>Pages that are referenced by each page in the <?= #app ?> application</h5>
<ewd:ifSessionNameExists sessionName="pageCalls">
  <table border=1 width="100%" class="propsText">
    <tr>
      <td align="center" class="listingCol"><b>Page</b></td>
      <td align="center" class="listingCol"><b>Pages Referenced</b></td>
    </tr>
    <ewd:forEach sessionName="pageCalls" index="$pageFrom" return="$data">
      <tr>
        <td align="center" class="listingCol"><?= $pageFrom ?></td>
        <td class="listingCol">
          <ewd:forEach sessionName="pageCalls" param1="$pageFrom" index="$pageCalled" return="$data2">
            <?= $pageCalled ?><br/>
          </ewd:forEach>
        </td>
      </tr>
    </ewd:forEach>
  </table>
<ewd:else>
  <p>Page Cross Reference has not been created yet : compile the entire application and try again</p>
</ewd:ifSessionNameExists>
<br/>